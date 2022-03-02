CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o concreteCreator1.o concreteCreator2.o concreteProduct1.o concreteProduct2.o creator.o product.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): concreteCreator1.h concreteCreator2.h concreteProduct1.h concreteProduct2.h creator.h product.h

clean:
	rm -rf main *.o
