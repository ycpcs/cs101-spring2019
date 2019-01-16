#! /usr/bin/perl

use strict;
use FileHandle;

my $fname = shift @ARGV || die;
my $n = shift @ARGV || die;

($fname =~ /^(.*?)(\d+)\.md$/) || die;
my $base = $1;
my $onum = $2;

my $newfile = "$base$n.md";
#print "newfile=$newfile\n";
#exit 0;
if (-e $newfile) {
	die "File $newfile is in the way";
}

my $fh = new FileHandle("<$fname") || die;
my $out_fh = new FileHandle(">$fname.tmp") || die;

while (<$fh>) {
	s,Lecture\s+(\d+),Lecture $n,;
	print $out_fh $_;
}

$fh->close();
$out_fh->close();

system("mv $fname.tmp $fname")/256 == 0 || die;
system("git mv $fname $newfile")/256 == 0 || die;

print "Done!\n";
