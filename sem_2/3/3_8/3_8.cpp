#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n] = { 32,11,57,23,5,92,35 };


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << "-1, " << arr[i] << ", ";
		}
		else
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	return 0;
}