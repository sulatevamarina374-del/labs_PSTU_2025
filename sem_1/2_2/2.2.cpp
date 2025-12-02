#include <iostream>

int main() {

	int n; int product = 1;

	std::cin >> n;

	if (n <= 0)
	{
		std::cout << "fail" << std::endl;
	}

	else
	{
		for (int i = 1; i <= n; i++)
		{
			product *= i;
		}
		std::cout << product << std::endl;
	}
}
