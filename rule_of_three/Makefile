CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o ruleOfThree.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): ruleOfThree.h

clean:
	rm -rf main *.o
