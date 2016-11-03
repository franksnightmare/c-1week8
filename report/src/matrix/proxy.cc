#include "matrix.ih"

Proxy::Proxy(Matrix *matrix, size_t start, size_t steps, Mode mode)
:
	d_matrix(matrix),
	d_start(start),
	d_steps(steps),
	d_mode(mode)
{
}
