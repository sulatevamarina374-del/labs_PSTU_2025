#include <iostream>
using namespace std;


int main()
{
	//lab 5 var 13
	int n, m;
	cin >> n;
	cin >> m;
	int** arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	bool found = false;
	int result = -1;

	for (int j = 1; j < m-1; j++)
	{
		int lsum = 0;
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < j; k++)
			{
				lsum += arr[i][k];
			}
		}
		int rsum = 0;
		for (int i = 0; i < n; i++)
		{
			for (int k = j+1; k < m; k++)
			{
				rsum += arr[i][k];
			}
		}
		if (lsum > rsum)
		{
			found = true;
			result = j+1;
			break;
		}
	}

	if (found)
	{
		cout << "yes, s indecsom: " << result << endl;
	}
	else
	{
		cout << "noy" << endl;
	}

	return 0;
}