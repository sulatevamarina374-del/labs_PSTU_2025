#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 2)
	{
		cout << "fail" << endl;
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;

		for (int i = 0; i < n - 2; i++)
		{
			cout << "* ";
			for (int j = 0; j < n - 2; j++)
			{
				cout << "  ";
			}
			cout << "* " << endl;
		}
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}