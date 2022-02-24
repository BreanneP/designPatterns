main: main.o ruleOfThree.o
	g++ main.o ruleOfThree.o -o main

main.o: main.cc
	g++ -c main.cc

ruleOfThree.o: ruleOfThree.cc ruleOfThree.h
	g++ -std=c++11 -c ruleOfThree.cc -o ruleOfThree.o

.PHONY: clean

clean:
	rm -rf main *.o
