#ifndef MATRIX_H_
#define MATRIX_H_

#include <cstddef>
#include <initializer_list>
#include <ostream>

enum Mode
{
	BY_ROWS,
	BY_COLUMNS
};

class Matrix;

class Proxy
{
	Matrix *d_matrix;
	
	size_t d_start = 0;
	size_t d_steps = 0;
	
	Mode d_mode = BY_ROWS;
	
	public:
		Proxy(Matrix *matrix, size_t start, size_t steps, Mode mode);
		friend std::istream &operator>>(std::istream &input,
			Proxy &&temp);
};

class Matrix
{
	size_t d_nRows = 0;
	size_t d_nCols = 0;
	
	double *d_data = 0;
	
	public:
		Matrix() = default;
		Matrix(size_t nRows, size_t nCols);
		Matrix(std::initializer_list<
			std::initializer_list<double>> rows);
		Matrix(Matrix const &other);
		Matrix(Matrix &&other);
		~Matrix();
		Matrix &operator=(Matrix const &other);
		Matrix &operator=(Matrix &&other);
		Matrix &tr();
		
		Proxy operator()(size_t nRows, size_t nCols, Mode mode = BY_ROWS);
		Proxy operator()(Mode mode);
		Proxy operator()(size_t start);
		Proxy operator()(Mode mode, size_t start);
		Proxy operator()(Mode mode, size_t start, size_t steps = 0);
		
		void swap(Matrix &other);
		
		size_t const &nRows();
		size_t const &nCols();
		
		double *row(size_t index);
		double const *row(size_t index) const;
		
		Matrix transpose();
		static Matrix identity(size_t dim);
		
		friend std::istream &operator>>(std::istream &input,
			Matrix &rvalue);
		friend std::ostream &operator<<(std::ostream &output,
			Matrix const &rvalue);
	
	private:
};

std::istream &operator>>(std::istream &input,
	Proxy &&temp);
std::istream &operator>>(std::istream &input,
	Matrix &rvalue);
std::ostream &operator<<(std::ostream &output,
	Matrix const &rvalue);

#endif
