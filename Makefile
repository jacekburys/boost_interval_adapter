main: main.o adapter.o
	$(CXX) main.o adapter.o -o main

main.o: main.c
	$(CC) main.c -c -o main.o

adapter.o: adapter.cpp
	$(CXX) adapter.cpp -c -o adapter.o

clean:
	rm -f main main.o adapter.o

.PHONY: clean
