main: main.o composite.o component.o leaf.o
	g++ main.o composite.o component.o leaf.o -o main

main.o: main.cc
	g++ -c main.cc

component.o: component.cc component.h
	g++ -std=c++11 -c component.cc -o component.o

leaf.o: leaf.cc leaf.h component.o
	g++ -std=c++11 -c leaf.cc -o leaf.o

composite.o: composite.cc composite.h component.o
	g++ -std=c++11 -c composite.cc -o composite.o

.PHONY: clean

clean:
	rm -rf main *.o
