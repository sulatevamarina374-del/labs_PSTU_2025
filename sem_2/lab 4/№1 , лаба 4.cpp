#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	//lab 4 var 13

	srand(time(0));
	int range_min = 1;
	int range_max = 7;
	const int n = 7;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << arr[i] << " ";
	}
	cout << endl;

	int add[n];
	int j = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > range_min)
		{
			add[j] = arr[i];
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		cout << add[i] << " ";
	}
	cout << endl;

	int k = 0;
	int h = 0;

	for (int i = 0; i < n; i++)
	{
		k += arr[i];
	}
	h = k / 2;
	for (int i = 0; i < 3; i++)
	{
		cout << h << " ";
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}