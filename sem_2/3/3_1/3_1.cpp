#include <iostream>
using namespace std;


int main()
{
	const int n = 7;
	int tmp;
	int arr[n] = { 1,2,3,4,5,6,7 };

	for (int i = 6; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}