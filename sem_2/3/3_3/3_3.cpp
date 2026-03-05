#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(0));
	int range_min = 1;
	int range_max = 99;
	const int n = 7;
	int arr[n];

	int max = 0;
	int tmp = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
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

	for (int i = 0; i < n; i++)
	{

		if (arr[i] == arr[max])
		{
			tmp++;
		}

	}
	cout << tmp << endl;


	return 0;

}