﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a % 2 == 0)cout << "Число " << a << " чётное.";
	else cout << "Число " << a << " не чётное.";

}
