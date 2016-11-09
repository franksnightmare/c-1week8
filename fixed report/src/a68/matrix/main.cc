#include "main.h"

int main()
{
    Matrix mat1({{1, 2, 3, 4}, {5, 6, 7, 8}});
    Matrix mat2({{1, 1, 1, 1}, {1, 1, 1, 1}});

    mat1 += mat2;

    Matrix mat3(mat1 + mat2);

    Matrix mat4 = mat3;
	
    mat4 = mat1 + mat2 + mat3;

    mat1 += mat2 += mat2 += mat3;

}

