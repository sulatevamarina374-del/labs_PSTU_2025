#include <iostream>
using namespace std;


int main()
{
	const int n = 7;
	int tmp, p, q;
	int arr[n] = { 23, 43, 53, 72, 81, 14, 52 };
	cin >> p >> q;
	p--;
	q--;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	while (p < q)
	{
		tmp = arr[p];
		arr[p] = arr[q];
		arr[q] = tmp;
		p++;
		q--;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}