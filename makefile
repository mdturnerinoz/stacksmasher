CFLAGS := -g -O0
CC     := gcc
all	: stackmash
stackmash : stacksmash.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -f *~ stacksmash
run :
	./stacksmash
