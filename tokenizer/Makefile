all: test

CFLAGS = -g -O2

test: test.o mytoc.o
	cc -o test test.oo mytoc.o

mytoc.o: mytoc.c
	cc -c mytoc.c

test.o: test.c mytoc.h
	cc -c mytoc.c
clean:
	rm -f  *.o test
