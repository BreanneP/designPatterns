main: main.o movement.o drone.o fly.o walking.o
	g++ main.o movement.o drone.o fly.o walking.o -o main

main.o: main.cc
	g++ -c main.cc

movement.o: movement.cc movement.h
	g++ -std=c++11 -c movement.cc -o movement.o

drone.o: drone.cc drone.h movement.o
	g++ -std=c++11 -c drone.cc -o drone.o

fly.o: fly.cc fly.h movement.o
	g++ -std=c++11 -c fly.cc -o fly.o

walking.o: walking.cc walking.h movement.o
	g++ -std=c++11 -c walking.cc -o walking.o

.PHONY: clean

clean:
	rm -rf main *.o
