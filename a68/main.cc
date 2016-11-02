#include "main.h"

int main()
{
    Matrix mat1(4, 8);
    Matrix mat2(4, 8);

    mat1 += mat2;

    Matrix mat3(mat1 + mat2);

    Matrix mat4 = mat3;

    mat4 = mat1 + mat2 + mat3;

    mat1 += mat2 += mat2 += mat3;
}

