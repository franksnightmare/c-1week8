#include "matrix.ih"
#include "matrix.h"

double &Matrix::operatorIndex(size_t rowIdx) const
{
    boundary(rowIdx);
    return d_data[rowIdx];
}
