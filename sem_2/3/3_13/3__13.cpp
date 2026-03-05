#include <iostream>
using namespace std;

int main()
{
	int k = 1;
	int tmp;

	const int n = 3;
	int arr[n][n] = {
		{6,2,9},
		{6,1,3},
		{11,4,7}
	};
	cin >> k;
	if (k >= n) { k = n - 1; }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[k][j] > arr[k][j + 1])
			{
				for (int r = 0; r < n; r++)
				{
					tmp = arr[r][j];
					arr[r][j] = arr[r][j + 1];
					arr[r][j + 1] = tmp;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}