#! /usr/bin/perl

my $f = shift @ARGV || die;
$f =~ /(.*)\.zip$/ || die;
#print "$1\n";
my $base = $1;

system("mkdir -p $base")/256 == 0 || die;
system("cp submitToMarmoset.pl $base")/256 == 0 || die;
system("zip -9r $base.zip $base/submitToMarmoset.pl")/256 == 0 || die;
system("rm -rf $base")/256 == 0 || die;

print "Updated $f, yay!\n";
