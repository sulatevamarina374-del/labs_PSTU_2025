#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int tpm, next;
	bool ordered = true;

	cin >> tpm;

	while (tpm != 0)
	{
		cin >> next;
		if (next != 0 && tpm > next)
		{
			ordered = false;
		}
		tpm = next;
	}

	if (ordered)
	{
		cout << "po vozrastani" << endl;
	}
	else
	{
		cout << "ne po vozrastani" << endl;
	}

	return 0;
}