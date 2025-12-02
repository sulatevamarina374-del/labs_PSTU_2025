#include <iostream>

int main()
{
	int n;
	int tpm, sum = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		tpm = 1;
		for (int j = i; j <= 2 * i; j++)
		{
			tpm *= j;
		}
		sum += tpm;
	}
	std::cout << sum << std::endl;


}
