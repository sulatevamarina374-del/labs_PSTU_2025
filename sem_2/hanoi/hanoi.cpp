#include <iostream>
using namespace std;

void hanoi(int n, char f, char t, char a)
{
	if (n == 1)
	{
		cout << "peredvinyt disk 1 s " << f << " na " << t << endl;
	}
	else
	{
		hanoi(n - 1, f, a, t);
		cout << "peredvinyt disk " << n << " s " << " na " << t << endl;
		hanoi(n - 1, a, t, f);
	}
}

int main()
{
	int n;
	cin >> n;

	if (n <= 0)
	{
		cout << "fail" << endl;
		return 1;
	}
	hanoi(n, 'A', 'B', 'C');

	return 0;
}