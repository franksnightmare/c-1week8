#include "main.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	Matrix mat1(4, 8);
	cout << mat1 << '\n';
	
	cin >> mat1;
	cout << mat1 << '\n';
	
	cin >> mat1(2, 5);
	cout << mat1 << '\n';
	
	cin >> mat1(2, 5, BY_COLUMNS);
	cout << mat1 << '\n';
	
	Matrix mat2(4, 8);
	cin >> mat2(BY_COLUMNS);
	cout << mat2 << '\n';
	
	cin >> mat2(BY_ROWS, 2, 4);
	cout << mat2 << '\n';
}
