﻿#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e;
	double k,sum;
	string g = "центовая монета";
	string h = "центовые монеты";
	string t = "центовых монет";
	cout << "Сколько у вас одноцентовых монет ?\n";
	cin >> a;
	cout << "Сколько у вас пятицентовых монет ?:\n";
	cin >> b;
	cout << "Сколько у вас десятицентовых монет ?:\n";
	cin >> c;
	cout << "Сколько у вас 25-центовых монет ?:\n";
	cin >> d;
	cout << "Сколько у вас 50-центовых монет ?:\n";
	cin >> e;
	k = (a + 5 * b + 10 * c + 25 * d + 50 * e);
	if (a % 10 == 1) {
		cout << "У вас " << a << " одно" << g << "\n";
	}
	if (a % 10 == 2) {
		cout << "У вас " << a << " одно" << h << "\n";
	}
	if (a % 10 > 2) {
		cout << "У вас " << a << " одно" << t << " \n";
	}
	if (b % 10 == 1) {
		cout << "У вас " << b << " пяти" << g << "\n";
	}
	if (b % 10 == 2) {
		cout << "У вас " << b << " пяти" << h << "\n";
	}
	if (b % 10 > 2) {
		cout << "У вас " << b << " пяти" << t << "\n";
	}
	if (c % 10 == 1) {
		cout << "У вас " << c << " десяти" << g << "\n";
	}
	if (c % 10 == 2) {
		cout << "У вас " << c << " десяти" << h << "\n";
	}
	if (c % 10 > 2) {
		cout << "У вас " << c << " десяти" << t << " \n";
	}
	if (d % 10 == 1) {
		cout << "У вас " << d << " 25-" << g << "\n";
	}
	if (d % 10 == 2) {
		cout << "У вас " << d << " 25-" << h << "\n";
	}
	if (d % 10 > 2) {
		cout << "У вас " << d << " 25-" << t << " \n";
	}
	if (e % 10 == 1) {
		cout << "У вас " << e << " 50-" << g << "\n";
	}
	if (e % 10 == 2) {
		cout << "У вас " << e << " 50-" << h << "\n";
	}
	if (e % 10 > 2) {
		cout << "У вас " << e << " 50-" << t << " \n";
	}
	sum = (a + b + c + d + e);
		cout << sum/100 << " $";
}