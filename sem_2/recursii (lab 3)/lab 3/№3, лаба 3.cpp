#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float E = 0.0001;

float Func(float x) {
	return sin(x);
}
float Funcn(float x, int n) {
	return pow(-1, n) * pow(x, 2 * n + 1) / (2 * n * (2 * n + 1));
}

float FuncSE(int x, int n) {
	if (abs(Funcn(x,n))>E)
	{
		return Funcn(x, n) + FuncSE(x, n + 1);
	}
	return 0;
}

float FuncSN(float x, int n) {
	if (n > 0) { return Funcn(x, n) + FuncSN(x, n - 1); }
	return 0;
}

int main() 
{
	float a = 0.1;
	float b = 1;
	int k = 10;

	cout << "|\t  x\t\t|\t FuncSN\t|\tFuncSE\t|\t  y\t\t|" << endl;
	for (int i = 0; i < 55; i++)
	{
		cout << "-";
	}
	cout << endl;
	for (float x = a; x <= b; x += (b - a) / k) {
		cout << fixed << setprecision(7) << "|\t" << x << " \t|\t";
		cout << fixed << setprecision(7) << FuncSN(x, 20) << "\t|\t";
		cout << fixed << setprecision(7) << FuncSE(x, 1) << "\t|\t";

		cout << fixed << setprecision(7) << Func(x) << "\t|" << endl;
	}
	return 0;
}