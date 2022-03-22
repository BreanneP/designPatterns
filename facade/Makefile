CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): facade.h subsystem1.h subsystem2.h

clean:
	rm -rf main *.o
