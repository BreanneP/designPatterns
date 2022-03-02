CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o concreteStrategyA.o concreteStrategyB.o context.o strategy.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): concreteStrategyA.h concreteStrategyB.h context.h strategy.h

clean:
	rm -rf main *.o
