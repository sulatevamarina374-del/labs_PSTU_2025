#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x) return i; 
	}
	return -1; 
}

int main()
{
	int arr[] = { 3, 5, 1, 7, 12, 5, 9, 6, 10};
	int n = sizeof(arr);
	int x;
	cin >> x;

	int res = linearSearch(arr, n, x);

	if (res == -1)
	{ 
		cout << "element " << x << " ne naiden" << endl; 
	}
	else 
	{
		cout << "element " << x << " naiden, index:" << res << endl; 
	}
	return 0;
}