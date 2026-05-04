#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct Gos {
		string name;
		string stol;
		int chis;
		int plosh;
	};

Gos* vv(Gos* tt, int n) {

	Gos* dd = new Gos[4];

	for (int i = 0, j = 0; i < 5; i++)
	{
		if (tt[i].chis < n)
		{
			continue;
		}
		dd[j] = tt[i];
		j++;

	}
	delete[] tt;
	return dd;
};

Gos* fd(Gos* tt, int k)
{

	Gos* bb = new Gos[5];
	for (int i = 0, j = 0; i < 5; i++)
	{
		bb[i] = tt[j];
		if (i == k)
		{
			bb[i + 1] = { "dss", "err", 44, 56 };
			i++;
		}
			j++;
		

	}
	delete[] tt;
	return bb;
};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Gos* arr = new Gos[5];

	arr[0] = { "dad", "sfs", 500, 250 };
	arr[1] = { "d", "f", 50, 25 };
	arr[2] = { "sfd", "gds", 300, 790 };
	arr[3] = { "fsf", "gffd", 100, 50 };
	arr[4] = { "ggf", "fss", 555, 100 };

	arr = vv(arr, 75);
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i].name << endl;
	}
	cout << "   " << endl;
	arr = fd(arr, 1);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].name << endl;
	}
	delete[] arr;

}