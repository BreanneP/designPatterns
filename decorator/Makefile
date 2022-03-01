main: main.o component.o decorator.o concreteComponent.o concreteDecoratorA.o concreteDecoratorB.o
	g++ main.o component.o decorator.o concreteComponent.o concreteDecoratorA.o concreteDecoratorB.o -o main

main.o: main.cc
	g++ -c main.cc

component.o: component.cc component.h
	g++ -std=c++11 -c component.cc -o component.o

decorator.o: decorator.cc decorator.h component.o
	g++ -std=c++11 -c decorator.cc -o decorator.o

concreteComponent.o: concreteComponent.cc concreteComponent.h component.o
	g++ -std=c++11 -c concreteComponent.cc -o concreteComponent.o

concreteDecoratorA.o: concreteDecoratorA.cc concreteDecoratorA.h component.o decorator.o
	g++ -std=c++11 -c concreteDecoratorA.cc -o concreteDecoratorA.o

concreteDecoratorB.o: concreteDecoratorB.cc concreteDecoratorB.h component.o decorator.o
	g++ -std=c++11 -c concreteDecoratorB.cc -o concreteDecoratorB.o

.PHONY: clean

clean:
	rm -rf main *.o
