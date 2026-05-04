#include <iostream>

using namespace std;

int FB(int n) {
	if (n <= 1) return 0;
	else if (n == 2) return 1;
	return FB(n - 2) + FB(n - 1);
}

int main()
{
	for (size_t i = 1; i < 20; i++)
	{
		cout << FB(i) << " ";
	}
	cout << endl;
	return 0;
}