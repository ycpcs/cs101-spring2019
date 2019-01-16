#! /usr/bin/perl -w

use strict;
use FileHandle;

my $zipfile = shift @ARGV || die;

die if (!($zipfile =~ /^(CS101_Lab\d\d).zip$/));
my $base = $1;

my $d = new FileHandle("unzip -l $zipfile|");
my $olddir;
while (<$d>) {
	chomp;
	if (/\s(CS101_Lab\d\d)\//) {
		$olddir = $1;
		last;
	}
}
(defined $olddir) || die;

Run("mkdir t");
Run("cd t && unzip ../$zipfile");
Run("cd t && mv $olddir $base");
Run("cd t && zip -9r $zipfile $base");
Run("cd t && mv $zipfile ..");
Run("rm -rf t");


sub Run {
	my ($cmd) = @_;

	#print "cmd=$cmd\n";
	system($cmd)/256 == 0 || die;
}
