#include "matrix.ih"
#include <ostream>

void Matrix::boundary(size_t rowIdx) const
{
    if (rowIdx < d_nRows)
        return;
    ostringstream out;
    out << "Matrix: boundary overflow, rowindex= " << rowIdx <<
           ", should be < " << d_nRows << '\n';
    throw out.str();

}
