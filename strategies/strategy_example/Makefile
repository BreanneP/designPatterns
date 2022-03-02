CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o drone.o fly.o movement.o walking.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): drone.h fly.h movement.h walking.h

clean:
	rm -rf main *.o