#include <iostream>

using namespace std;

// итеративный 
int binarySearch(int arr[], int low, int high, int x)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == x) return mid;
		if (arr[mid] < x) low = mid + 1; 
		else high = mid - 1;
	}
	return -1;
}

// рекурсивный 
int binarySearchRecursive(int arr[], int low, int high, int x)
{
	if (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == x) return mid;
		if (arr[mid] > x)
			return binarySearchRecursive(arr, low, mid - 1, x); 
			return binarySearchRecursive(arr, mid + 1, high, x);
	}
	return -1;
}

int main()
{
	int arr[] = { 4, 2, 5, 1, 6, 19, 10, 5, 16 };
	int n = sizeof(arr);
	int x;

	cin >> x;

	int res = binarySearch(arr, 0, n - 1, x);
	if (res == -1) cout << "element " << x << " ne naiden" << endl;
	else cout << "element " << x << " naiden, index: " << res << endl;

	int tt = binarySearchRecursive(arr, 0, n - 1, x);
	if (res == -1) cout << "element " << x << " ne naiden" << endl;
	else cout << "element " << x << " naiden, index: " << tt << endl;
	return 0;
}