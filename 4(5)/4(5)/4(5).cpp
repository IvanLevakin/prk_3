#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b; char c; double n;
	cin >> a >> b >> c;
	if (c == '+')n = a + b;
	if (c == '-')n = a - b;
	if (c == '*')n = a * b;
	if (c == '/') {
		if (b != 0)n = a / b;
		else cout << "error";
	}
	cout << n;
	return 0;
}

