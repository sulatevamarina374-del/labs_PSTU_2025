#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n, s;
    cout << "¬ведите первое число: ";
    cin >> n;
    cout << "¬ведите второе число: ";
    cin >> s;
    int* ptr1 = &n;
    int* ptr2 = &s;
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    cout << n << s << endl;

	return 0;
}