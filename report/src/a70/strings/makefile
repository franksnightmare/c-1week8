STRINGS = addstring1.o addstring2.o at1.o at2.o capacity.o copyconstr.o destructor.o moveconstr.o operator=.o operator==.o operator!=.o rawpointers.o reserve.o resize.o size.o strings1.o strings2.o swap.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: %.cc strings.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(STRINGS)
	g++ -std=c++11 -Wall -c -o main main.cc $(STRINGS)
