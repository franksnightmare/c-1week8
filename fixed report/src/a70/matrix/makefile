MATRIX = copyconstructor.o destructor.o identity.o matrix1.o matrix2.o moveconstructor.o moveoperator=.o ncols.o nrows.o operator=.o operator==.o operator!=.o row.o swap.o tr.o transpose.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: %.cc matrix.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MATRIX)
	g++ -std=c++11 -Wall -c -o main main.cc $(MATRIX)
