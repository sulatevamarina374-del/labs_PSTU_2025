#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n] = { 32,11,54,23,56,92,35 };
	int min;
	int max;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	max = arr[0];
	min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;

	return 0;
}