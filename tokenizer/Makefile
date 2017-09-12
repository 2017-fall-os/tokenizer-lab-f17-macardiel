CC = gcc
CFLAGS = -I.
DEPS = MyToc.h
OBJ = MyToc.o test.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
test: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
	
clean:
	rm -f *.o test

