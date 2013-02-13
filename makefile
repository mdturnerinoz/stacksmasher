CFLAGS := -g -O0
CFLAGS2 := $(CFLAGS) -Wall -fno-stack-protector
CC     := gcc
all	: stacksmash
stacksmash : stacksmash.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -fr *~ stacksmash *dSYM core*
run : all
	./stacksmash
