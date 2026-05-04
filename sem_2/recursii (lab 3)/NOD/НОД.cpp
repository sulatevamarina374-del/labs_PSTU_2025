#include <iostream>

using namespace std;

int NOD(int n, int m) {
	if (n == m) return n;
	if (n > m) return NOD(n - m, m);
	return NOD(n, m - n);
}

int main()
{
	cout << " NOD(10,3) " << "\t" << NOD(10, 3) << endl;
	cout << " NOD(44,2) " << "\t" << NOD(44, 2) << endl;
	cout << " NOD(25,5) " << "\t" << NOD(25, 5) << endl;
	cout << " NOD(3,3) " << "\t" << NOD(3, 3) << endl;
	return 0;
}