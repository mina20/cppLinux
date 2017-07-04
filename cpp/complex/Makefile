complex : main.o complex.o
	g++ main.o complex.o -o complex
complex.o : complex.cpp
	g++ -c complex.cpp complex.h
main.o : main.cpp
	g++ -c main.cpp complex.h
