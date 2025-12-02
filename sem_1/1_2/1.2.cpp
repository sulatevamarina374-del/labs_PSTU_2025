#include <iostream>

int main() {

	float a, b;

	std::cin >> a >> b;

	if (b == 0)
	{
		std::cout << "fail";
	}
	else
	{
		std::cout << a / b << std::endl;
	}
}
