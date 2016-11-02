#include "main.h"

int main(int argc, char **argv)
{
	// Matrix matrix1(4, 7);
	// Matrix matrix2 = Matrix::identity(5);
	// Matrix matrix3({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
	// Matrix matrix4(matrix3.transpose());

	Matrix mat(4, 6);
	memcpy(&mat[2], &mat[1], 6 * sizeof(double));
	mat[2][3] = 23.5;
	// Causes an error, column too big/small.
	//Matrix matrix5({{1, 2, 3}, {4, 5, 6}, {7, 8}});

	// Causes an error, matrix not square.
	//Matrix matrix6(matrix1.transpose();

	printMatrix(mat);
}
