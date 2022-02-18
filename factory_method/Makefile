main: main.o product.o concreteProduct1.o concreteProduct2.o creator.o concreteCreator1.o concreteCreator2.o
	g++ main.o product.o concreteProduct1.o concreteProduct2.o creator.o concreteCreator1.o concreteCreator2.o -o main

main.o: main.cc
	g++ -c main.cc

product.o: product.cc product.h
	g++ -std=c++11 -c product.cc -o product.o

concreteProduct1.o: concreteProduct1.cc concreteProduct1.h product.o
	g++ -std=c++11 -c concreteProduct1.cc -o concreteProduct1.o

concreteProduct2.o: concreteProduct2.cc concreteProduct2.h product.o
	g++ -std=c++11 -c concreteProduct2.cc -o concreteProduct2.o

creator.o: creator.cc creator.h product.o
	g++ -std=c++11 -c creator.cc -o creator.o

concreteCreator1.o: concreteCreator1.cc concreteCreator1.h product.o creator.o concreteProduct1.o
	g++ -std=c++11 -c concreteCreator1.cc -o concreteCreator1.o

concreteCreator2.o: concreteCreator2.cc concreteCreator2.h product.o creator.o concreteProduct2.o
	g++ -std=c++11 -c concreteCreator2.cc -o concreteCreator2.o

.PHONY: clean

clean:
	rm -rf main *.o
