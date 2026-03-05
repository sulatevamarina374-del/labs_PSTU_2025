#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n] = { 32,11,54,23,56,92,35 };
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j;
			}
		}
	}
	cout << arr[max] << endl;

	return 0;
}