#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, tpm, max;

	cout << "введите длину последовательности:" << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "последовательность пустая" << endl;
		return 0;
	}

	else
	{
		cout << "ввидите первое число:" << endl;
		cin >> max;
		for (int i = 2; i <= n; i++)
		{
			cout << "введите следующие число:" << endl;
			cin >> tpm;
			if (tpm > max)
			{
				max = tpm;
			}
		}
		cout << "первый максимальный элемент:" << max << endl;
	}

	return 0;
}