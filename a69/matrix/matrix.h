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

class Matrix
{
	size_t d_nRows = 0;
	size_t d_nCols = 0;
	size_t d_writeStart = 0;
	size_t d_writeParts = 0;
	
	double *d_data = 0;
	
	Mode d_writeMode = BY_ROWS;
	
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
		Matrix &operator()(size_t nRows, size_t nCols);
		Matrix &operator()(size_t nRows, size_t nCols, Mode writeMode);
		Matrix &operator()(Mode writeMode);
		Matrix &operator()(Mode writeMode, size_t writeStart, size_t writeParts);
		Matrix &tr();
		
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
	Matrix &rvalue);
std::ostream &operator<<(std::ostream &output,
	Matrix const &rvalue);

#endif
