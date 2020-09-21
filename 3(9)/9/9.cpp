#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string s; int n;
	cin >> s;
	if (s == "nol'")cout << "Это число " << 0;
	else
	if (s == "odin")cout << "Это число " << 1;
	else
	if (s == "dva")cout << "Это число " << 2;
	else
	if (s == "tri")cout << "Это число " << 3;
	else
	if (s == "chetiri")cout << "Это число " << 4;
	else cout << "Я не знаю такого числа!";
}
