#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n] = { 32,11,54,23,56,92,35 };
	int k;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cin >> k;

	for (int i = k; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < k; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}