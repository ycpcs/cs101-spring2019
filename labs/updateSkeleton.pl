#! /usr/bin/perl -w

# Update the semester and/or submit URL referenced in a
# .submit or Makefile in a project skeleton.  Useful for
# updating skeleton zipfiles for a new semester without
# manual editing.

use strict;
use Cwd;
use FileHandle;
use File::Temp qw(tempfile tempdir);
use Getopt::Long;

my $submitUrl;
my $semester;
my $project;
GetOptions(
	"submitUrl=s" => \$submitUrl,
	"semester=s" => \$semester,
	"project=s" => \$project
) || Usage();

#my $zipfile = shift @ARGV || Usage();

((defined $semester) || (defined $submitUrl)) || (defined $project) || Usage();

foreach my $zipfile (@ARGV) {
	# Make the zipfile path absolute
	if (! ($zipfile =~ m,^/,)) {
		$zipfile =  getcwd() . "/$zipfile";
	}
	
	# Create a temp dir in which to extract the files
	my $dir = tempdir(CLEANUP => 1);
	
	# Unzip the files
	system("cd '$dir' && unzip '$zipfile'")/256 == 0 || die "Couldn't unzip: $!\n";
	
	# Find .submit and/or Makefile, and update the semester
	my $updated = 0;
	my $find_fh = new FileHandle("find '$dir' \\( -name .submit -or -name Makefile \\) -print|") || die;
	while (<$find_fh>) {
		chomp;
		if (m,(.*/)?Makefile$, || m,(.*/)?\.submit$,) {
			Munge($_);
			$updated++;
		}
	}
	$find_fh->close();
	
	# Create new zipfile (as a temp file).
	my ($zip_fh, $zipfname) = tempfile( 'upsmXXXX', TMPDIR => 1, SUFFIX => '.zip' );
	$zip_fh->close();
	system("rm -f '$zipfname'")/256 == 0 || die; # zip will freak out if the temp file already exists
	system("cd '$dir' && zip -9r '$zipfname' *")/256 == 0 || die "Couldn't create new zip file: $!\n";
	
	# Replace original zipfile
	system("mv '$zipfname' '$zipfile'")/256 == 0 || die "Couldn't replace zipfile: $!\n";
	
	print "Success!\n";
}
	
sub Usage {
	print STDERR  <<"EOF";
Usage: updateSemester.pl [options] <zipfile> [<zipfile>...]
Options:
  --semester=<semester, e.g. Fall 2012>
  --submitUrl=<submit url>
  --project=<project number>
EOF
	exit 1;
}

sub Munge {
	my ($fname) = @_;
	my $fh = new FileHandle("<$fname") || die;

	my ($tmp_fh, $tmpfname) = tempfile( 'upsmXXXX', TMPDIR => 1 );

	my $eol;

	while (<$fh>) {
		# Assume that however the first line is terminated is how
		# all of the lines should be terminated.
		if (!defined $eol) {
			$eol = (substr($_, -2) eq "\r\n") ? "\r\n" : "\n";
		}

		# Chomp line terminator (whichever it happens to be)
		s,\r\n,,;
		s,\n,,;

		# Update semester and/or submit URL as necessary
		if ((defined $semester) && /^\s*(SEMESTER|semester)\s*=\s*(\S.*)/) {
			print $tmp_fh "$1=$semester$eol";
		} elsif ((defined $submitUrl) && /^\s*(submitURL|SUBMIT_URL)\s*=\s*(\S.*)/) {
			print $tmp_fh "$1=$submitUrl$eol";
		} elsif ((defined $project) && /^\s*(PROJECT_NUMBER|projectNumber)\s*=\s*(\S+)\s*$/) {
			print $tmp_fh "$1=$project$eol";
		} else {
			print $tmp_fh "$_$eol";
		}
	}

	$tmp_fh->close();
	$fh->close();

	system("mv '$tmpfname' '$fname'")/256 == 0 || die "Couldn't overwrite $fname: $1\n";

}
