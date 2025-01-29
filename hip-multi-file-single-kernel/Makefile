SOURCES := $(wildcard *.c)
OBJECTS := $(SOURCES:.c=.o)
CC =  hipcc
OPT = 3

.PHONY: all clean
all: $(OBJECTS)
	$(CC) -fuse-ld=lld -O$(OPT) $(OBJECTS) -o a.out

%.o : %.c
	$(CC) -x hip -c -O$(OPT) $< -o $@

clean:
	rm -rf *.o a.out
