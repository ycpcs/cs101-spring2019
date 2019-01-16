#! /usr/bin/perl -w

use strict;

my $zipfile = shift @ARGV || Usage();
my $number = shift @ARGV || Usage();

my $newzipfile = sprintf("CS101_Lab%02d.zip", $number);
my $newproject = sprintf("lab%02d", $number);

Run("git mv $zipfile $newzipfile");
Run("updateSkeleton.pl --project='$newproject' $newzipfile");
print "Done!\n";

sub Usage {
	print STDERR "Usage: renumber.pl <zipfile> <number>\n";
	exit 1;
}

sub Run {
	my ($cmd) = @_;

	#print "cmd=$cmd\n";
	system($cmd)/256 == 0 || die;
}
