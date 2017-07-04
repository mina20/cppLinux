
CC = g++
CFLAGS = -g -Wno-deprecated
OBJS = qroot_method.o qroot_main.o
HEADERS = qroot_header.h
SOURCES = qroot_method.cpp qroot_main.cpp

TARGET = root
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) -lm
$(OBJS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES)
tidy:
	\rm -rf $(OBJS) *~
clean: tidy
	\rm -rf $(TARGET)
