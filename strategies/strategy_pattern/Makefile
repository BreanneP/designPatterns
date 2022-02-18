main: main.o strategy.o context.o concreteStrategyA.o concreteStrategyB.o
	g++ main.o strategy.o context.o concreteStrategyA.o concreteStrategyB.o -o main

main.o: main.cc
	g++ -c main.cc

strategy.o: strategy.cc strategy.h
	g++ -std=c++11 -c strategy.cc -o strategy.o

context.o: context.cc context.h strategy.o
	g++ -std=c++11 -c context.cc -o context.o

concreteStrategyA.o: concreteStrategyA.cc concreteStrategyA.h strategy.o
	g++ -std=c++11 -c concreteStrategyA.cc -o concreteStrategyA.o

concreteStrategyB.o: concreteStrategyB.cc concreteStrategyB.h strategy.o
	g++ -std=c++11 -c concreteStrategyB.cc -o concreteStrategyB.o

.PHONY: clean

clean:
	rm -rf main *.o
