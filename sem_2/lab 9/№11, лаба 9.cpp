#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream f1("f1.txt");
	if (!f1)
	{
		cout << "fail" << endl;
	}
	string stroka[10];

	for (int i = 0; i < 10; i++) {
		cout << "stroka " << i + 1 << ": " << endl;
		getline(cin, stroka[i]);
		f1 << stroka[i] << endl;
	}
	f1.close();

	ifstream check("f1.txt");
	if (!check) {
		cout << "fail" << endl;
		return 1;
	}
	string s;
	int num = 1;
	while (getline(check, s)) {
		cout << num << ") " << s << endl;
		num++;
	}
	check.close();

	ifstream chtenie("f1.txt");
	ofstream f2("f2.txt");
	if (!f2) {
		cout << "fail" << endl;
		return 1;
	}

	string temp;
	while (getline(chtenie, temp)) {
		if (temp.length() > 0) {
			char nach = temp[0];
			if (nach == 'A' || nach == 'a') {
				f2 << temp << endl;
			}
		}
	}

	chtenie.close();
	f2.close();

	ifstream chtenief2("f2.txt");
	if (!chtenief2) {
		cout << "fail" << endl;
	}
	else {
		string strokaf2;
		int n2 = 1;
		while (getline(chtenief2, strokaf2)) {
			cout << n2 << ") " << strokaf2 << endl;
			n2++;
		}
	}
	chtenief2.close();

	ifstream poisk("f2.txt");
	if (!poisk) {
		cout << "fail" << endl;
		return 1;
	}
	string strokaf2;
	int slova = 0;
	while (getline(poisk, strokaf2)) {
		bool inWord = false;

		for (int i = 0; i < strokaf2.length(); i++) {
			if (strokaf2[i] != ' ') {
				if (!inWord) {
					slova++;
					inWord = true;
				}
			}
			else {
				inWord = false;
			}
		}
	}

	poisk.close();
		
	cout << "kolichestvo slov: " << slova << endl;

	return 0;
}