
stacksmasher: this program is used to show how a stack can be corrupted by using too
large of a value in a move. The original code did not work the same as its author 
(at The Geek Stuff) had noted in his article at
(http://www.thegeekstuff.com/2013/02/stack-smashing-attacks-gcc/);

I have both his version and mine included here so both can be played with.

this is a work-in-progress and I will provide more/better usage documentation as my
diurnal activities allow.

Marty Turner - 13 Feb 2013


TO DO:

1. document this better.
2. test the original model and mine in the makefile.
3. note that do NOT assume the stack-protector GCC flag is set on any Linux distro 
   (e.g. mine is Mageia 2 whereas his was Ubuntu 12.04). (NB I have force set it in
   the makefile).
4. Makefile commentary and build each version of the program with both the flags
   set and not set.
5. Test instructions herein on how to run the various tests and observe behavior 
   (note that ulimit settings need to be documented too).


