#include <iostream>
using namespace std;

int main()
{
	const int n = 3;
	int arr[n][n] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
			cout << endl;
	}
	int tmp;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
	{
			tmp = arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i] = tmp;
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


	return 0;
}