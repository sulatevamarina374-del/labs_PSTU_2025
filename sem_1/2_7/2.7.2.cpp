#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 2) // минимальное условие
	{
		cout << "fail" << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	return 0;
}