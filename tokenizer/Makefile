all: printFile

CFLAGS = -g -O2

mytoc: mytoc.o strcopy.o readlines.o
	cc -o printFile printFile.o strcopy.o readlines.o
clean:
	rm -f  *.o test
