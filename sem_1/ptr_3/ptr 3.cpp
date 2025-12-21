#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "ru");
   float a = 7.8;
   float b = 13.35;

   cout << "a=" << a << " b=" << b << endl;

   float* ptr_a = &a;
   float* ptr_b = &b;

   float sum = *ptr_a + *ptr_b;

   cout << "a + b = " << sum << endl;

	return 0;
}