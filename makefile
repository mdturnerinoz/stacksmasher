LEN      = 12
CFLAGS  := -g -O0 -Wall -fstack-protector
CFLAGS2 := -g -O0 -Wall -fno-stack-protector
CC      := gcc
all	: stacksmash1 stacksmash2
stacksmash1 : stacksmash1.c
	$(CC) $(CFLAGS) $< -o $@
stacksmash2 : stacksmash2.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -fr *~ stacksmash1 stacksmash2 *dSYM core*
run1 : all
	./stacksmash1 $(LEN)
run2 : all
	./stacksmash2 $(LEN)
