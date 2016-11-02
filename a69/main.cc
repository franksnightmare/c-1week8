#include "main.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	Matrix mat(4, 8);
	cout << mat << '\n';
	
	cin >> mat;
	cout << mat << '\n';
	
	cin >> mat(2, 5);
	cout << mat << '\n';
	
	cin >> mat(2, 5, BY_COLUMNS);
	cout << mat << '\n';
}
