#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, s, k;
	bool flag = false;

	cin >> n >> s;

	while (n > 0 && !flag)
	{
		k = n % 10;
		if (k == s)
		{
			flag = true;
			cout << "цифра найдена" << endl;
		}
		else
		{
			n /= 10;
		}
	}
	if (!flag)
	{
		cout << "цифра не найдена" << endl;
	}

	return 0;
}