#include <iostream>
#include <cmath>
using namespace std;
//lab 7.1 var 11

void jj(float a, float b)
{
	float c;
	c = a * b;
	cout << c << endl;
}

void kk(int a, int b)
{
	cout << a << "/" << b << endl;
}

void ll(int a, int b)
{
	cout << a << "/" << b << endl;
}

int main()
{
	float a, b;
	cin >> a;
	cin >> b;
	jj(a,b);

	int s, f, c, d;
	cout << "perva drob: " << endl;
	cin >> s;
	cin >> f;
	kk(s, f);
	cout << "vtora drob: " << endl;
	cin >> c;
	cin >> d;
	ll(c, d);
	cout << "ymnojenie: " << s * c << "/" << f * d << endl;
	return 0;
}