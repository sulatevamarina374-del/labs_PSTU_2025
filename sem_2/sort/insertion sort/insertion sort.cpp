#include <iostream>
using namespace std;

int main()
{
	//insertion sort
	const int n = 7;
	int arr[n] = { 5, 3, 1, 6, 7, 5, 4 };

	int key;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;



	return 0;
}