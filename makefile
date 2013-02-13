LEN      = 12
CFLAGS  := -g -O0 -Wall -fstack-protector
CFLAGS2 := -g -O0 -Wall -fno-stack-protector
CC     := gcc
all	: stacksmash
stacksmash : stacksmash.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -fr *~ stacksmash *dSYM core*
run : all
	./stacksmash $(LEN)
