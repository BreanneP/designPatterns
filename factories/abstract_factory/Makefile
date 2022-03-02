CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o concreteProductB1.o concreteProductB2.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): abstractFactory.h abstractProductA.h abstractProductB.h concreteFactory1.h concreteFactory2.h concreteProductA1.h concreteProductA2.h concreteProductB1.h concreteProductB2.h

clean:
	rm -rf main *.o
