LEN       = 12
CFLAGS   := -g -O0 -Wall -fstack-protector
CFLAGSNO := -g -O0 -Wall -fno-stack-protector
CC       := gcc
all	      : stacksmash1 stacksmash2 stacksmash1n stacksmash2n
stacksmash1 : stacksmash1.c
	$(CC) $(CFLAGS) $< -o $@
stacksmash2 : stacksmash2.c
	$(CC) $(CFLAGS) $< -o $@
stacksmash1n : stacksmash1.c	
	$(CC) $(CFLAGSNO) $< -o $@
stacksmash2n : stacksmash2.c
	$(CC) $(CFLAGSNO) $< -o $@
clean       :
	rm -fr *~ stacksmash1 stacksmash2 stacksmash1n stacksmash2n *dSYM core* *.map
run1        : all
	./stacksmash1 $(LEN)
run2        : all
	./stacksmash2 $(LEN)
run1n        : all
	./stacksmash1n $(LEN)
run2n        : all
	./stacksmash2n $(LEN)
