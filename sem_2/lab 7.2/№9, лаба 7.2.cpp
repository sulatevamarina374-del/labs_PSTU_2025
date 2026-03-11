#include <iostream>
#include <cstdarg>
using namespace std;
//lab 7.2

int sum(int k, ...)
{
	va_list args;
	va_start(args, k);
	
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}

void main( )
{
	cout << "summa(6, 7, 4) = " << sum(3, 6, 7, 4) << endl;
	cout << "summa(1, 2, 3, 4, 5, 6, 7) = " << sum(7, 1, 2, 3, 4, 5, 6, 7) << endl;
	cout << "summa(1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22) = " << sum(11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22) << endl;
}