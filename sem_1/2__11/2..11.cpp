#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, tpm;
	bool plusFirst = false;
	bool minusFirst = false;

	cout << "видите длину последовательности:" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> tpm;
		if (!plusFirst && !minusFirst)
		{
			if (tpm > 0)
			{
				plusFirst = true;
			}
			else if (tpm < 0)
			{
				minusFirst = true;
			}
		}
	}
	if (plusFirst)
	{
		cout << "сначала ввели положительное число";
	}
	else if (minusFirst)
	{
		cout << "сначала ввели отрицательное число";
	}
	else
	{
		cout << "все элементы были нулевые";
	}
	cout << endl;

	return 0;
}