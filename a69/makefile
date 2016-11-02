MATRIX = copyconstructor.o destructor.o extractor.o identity.o inserter.o matrix1.o matrix2.o moveconstructor.o moveoperator=.o ncols.o nrows.o operator=.o poperator1.o poperator2.o poperator3.o poperator4.o row.o rowconst.o swap.o tr.o transpose.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: %.cc main.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: matrix/%.cc matrix/matrix.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MATRIX) printmatrix.o main.h
	g++ -std=c++11 -Wall -lstdc++ -o main main.cc $(MATRIX) printmatrix.o main.h
