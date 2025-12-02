#include <iostream>

int main() {

	float a;

	std::cin >> a;

	if (a < 5)
	{
		std::cout << a * 3 << std::endl;
	}

	else if (a < 7)
	{
		std::cout << a / 10 << std::endl;
	}

	else
	{
		std::cout << a + 3 << std::endl;
	}
}

