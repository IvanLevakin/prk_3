#include <iostream>
using namespace std;
int main()
{
	int a, b, c, a1,b1,c1;
	cin >> a >> b >> c;
	if (a <= b && a <= c)a1 = a;
	if (b <= a && b <= c)a1 = b;
	if (c <= b && c <= a)a1 = c;

	if (a >= b && a >= c)c1 = a;
	if (b >= a && b >= c)c1 = b;
	if (c >= b && c >= a)c1 = c;

	b1 = a + b + c - a1 - c1;


	cout << a1 << ',' << b1 << "," << c1 << endl;

}

