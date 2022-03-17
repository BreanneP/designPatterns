CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o observer.o subject.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): iobserver.h observer.h isubject.h subject.h

clean:
	rm -rf main *.o
