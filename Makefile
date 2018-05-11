CXX=g++

CPPFLAGS=-c -Wall

objects=main.o

main: main.o
	$(CXX) -std=c++11 $(objects) -o main
main.o: main.cc

.PHONY: clean
clean:
	rm *.o main
