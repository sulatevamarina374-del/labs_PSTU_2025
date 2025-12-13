#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	int n, tpm, max, min;

	cout << "введите длину последовательности:" << endl;
	cin >> n;

	cout << "введите первое число:" << endl;
	cin >> tpm;
	max = tpm;
	min = tpm;

	for (int i = 2; i <= n; i++)
	{
		cout << "введите следующие число:" << endl;
		cin >> tpm;
		if (tpm > max)
		{
			max = tpm;
		}
		else if (tpm < min)
		{
			min = tpm;
		}
	}
	cout << "сумма максимального и минимального элемента:" << max + min << endl;

	return 0;
}