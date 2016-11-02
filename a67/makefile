MATRIX = copyconstructor.o destructor.o matrix1.o matrix2.o moveconstructor.o moveoperator=.o ncols.o nrows.o operator=.o row.o rowconst.o swap.o tr.o transpose.o boundary.o operator[].o operator[]const.o operatorindex.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: %.cc main.h
	g++ -std=c++14 -Wall -c -o $@ $<

%.o: matrix/%.cc matrix/matrix.h matrix/matrix.ih
	g++ -std=c++14 -Wall -c -o $@ $<

main: main.cc $(MATRIX) identity.o printmatrix.o main.h
	g++ -std=c++14 -Wall -lstdc++ -o main main.cc $(MATRIX) identity.o printmatrix.o main.h
