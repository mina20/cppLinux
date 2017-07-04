CC = g++
CFLAGS = -g -Wno-deprecated
OBJS = sub.o main.o
HEADERS = sub.h
SOURCES = sub.cpp main.cpp

TARGET = sub
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) -lm
$(OBJS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES)
tidy:
	\rm -rf $(OBJS) *~
clean: tidy
	\rm -rf $(TARGET)

