
stacksmasher: this program is used to show how a stack can be corrupted by using too
large of a value in a move. The original code did not work the same as its author 
(at The Geek Stuff) had noted in his article at
(http://www.thegeekstuff.com/2013/02/stack-smashing-attacks-gcc/);

I have both his version and mine included here so both can be played with.

this is a work-in-progress and I will provide more/better usage documentation as my
diurnal activities allow.

The makefile builds four versions of the program to test:

stacksmash1/stacksmash1n: The former uses stack-protector while the latter version 
                          does not. In both cases you will be prompted for input.
                          As the stack is laid out with the variables I've coded,
                          you will not be able to enter greater than 24 characters
                          without getting a SIGSEGV (segmentation fault). You can
                          rearrange the variables and the stacksmash2/2n version
                          will show you memory addresses to see why the overlay
                          has occurred.

stacksmash2/stacksmash2n: The former uses stack-protector while the latter version
                          while the latter doers not. The code will perform a 
                          "memmove" based on a length entered on the command line
                          defaulted to 12) of the makefile or if entered by you.
                          Same stack overlay per the "1" version above; any length
                          greater than 24 results in a SIGSEGV.

NB1: The stack-protector option may or may not be defaulted in the version of GCC
     running on your distro. I have accounted for that possibility in the 
     stacksmash1 and stacksmash2 objects by forcing it on in the compile step; you
     may want to do the same (or test this yourself) as I found the original 
     author's notes (Ubuntu 12.04) not the same for Mageia 2.

NB2: I have only tested this on Mageia 2 Linux-wise. It does fail on Mac OS (BSD
     Unix) but with no stack trace as it does on Linux.

Marty Turner - 13 Feb 2013


TO DO:

1. document this better.
2. Test instructions herein on how to run the various tests and observe behavior 
   (note that ulimit settings need to be documented too).
3. Comment the "whys and wherefores" in the code in each version.



