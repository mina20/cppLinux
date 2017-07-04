CC=gcc
CFLAGS=-g -Wall
OBJECTS=main.o hello.o
TARGET=hello
%.o: %.c hello.h
	$(CC) $(CFLAGS) -c -o $@ $< 
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^
