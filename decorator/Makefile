CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o component.o concreteComponent.o concreteDecoratorA.o concreteDecoratorB.o decorator.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): component.h concreteComponent.h concreteDecoratorA.h concreteDecoratorB.h decorator.h

clean:
	rm -rf main *.o
