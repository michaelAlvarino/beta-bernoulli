CC=g++

CFLAGS=-c -Wall

objects=main.o

main: $(objects)
	$(CC) $(objects) -o $@

$(objects): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm *.o main
