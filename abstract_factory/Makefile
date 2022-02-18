main: main.o abstractProductA.o concreteProductA1.o concreteProductA2.o abstractProductB.o concreteProductB1.o concreteProductB2.o abstractFactory.o concreteFactory1.o concreteFactory2.o
	g++ main.o abstractProductA.o concreteProductA1.o concreteProductA2.o abstractProductB.o concreteProductB1.o concreteProductB2.o abstractFactory.o concreteFactory1.o concreteFactory2.o -o main

main.o: main.cc
	g++ -c main.cc

abstractProductA.o: abstractProductA.h
	g++ -std=c++11 -c abstractProductA.h -o abstractProductA.o

concreteProductA1.o: concreteProductA1.cc concreteProductA1.h abstractProductA.o
	g++ -std=c++11 -c concreteProductA1.cc -o concreteProductA1.o

concreteProductA2.o: concreteProductA2.cc concreteProductA2.h abstractProductA.o
	g++ -std=c++11 -c concreteProductA2.cc -o concreteProductA2.o

abstractProductB.o: abstractProductB.h abstractProductA.o
	g++ -std=c++11 -c abstractProductB.h -o abstractProductB.o

concreteProductB1.o: concreteProductB1.cc concreteProductB1.h abstractProductA.o abstractProductB.o
	g++ -std=c++11 -c concreteProductB1.cc -o concreteProductB1.o

concreteProductB2.o: concreteProductB2.cc concreteProductB2.h abstractProductA.o abstractProductB.o
	g++ -std=c++11 -c concreteProductB2.cc -o concreteProductB2.o

abstractFactory.o: abstractFactory.h abstractProductA.o abstractProductB.o
	g++ -std=c++11 -c abstractFactory.h -o abstractFactory.o

concreteFactory1.o: concreteFactory1.h abstractFactory.o abstractProductA.o abstractProductB.o concreteProductA1.o concreteProductB1.o
	g++ -std=c++11 -c concreteFactory1.h -o concreteFactory1.o

concreteFactory2.o: concreteFactory2.h abstractFactory.o abstractProductA.o abstractProductB.o concreteProductA2.o concreteProductB2.o
	g++ -std=c++11 -c concreteFactory2.h -o concreteFactory2.o

.PHONY: clean

clean:
	rm -rf main *.o
