CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o component.o composite.o leaf.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): component.h composite.h leaf.h

clean:
	rm -rf main *.o
