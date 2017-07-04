CC = g++
CFLAGS = -g -Wno-deprecated
OBJS = queen_methods.o queen_main.o
HEADERS = queen_header.h
SOURCES = queen_methods.cpp queen_main.cpp

TARGET = queen
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) -lm
$(OBJS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES)
tidy:
	\rm -rf $(OBJS) *~
clean: tidy
	\rm -rf $(TARGET)

