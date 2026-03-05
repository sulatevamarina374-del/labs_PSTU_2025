#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(0));
	int range_min = 1;
	int range_max = 10;
	const int n = 7;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << arr[i] << " ";
	}
	cout << endl;

	int ll = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				ll++;
			}
		}
	}
	if (ll == 0)
	{
		cout << "good" << endl;
	}
	else { cout << "not good" << endl; }

	return 0;

}