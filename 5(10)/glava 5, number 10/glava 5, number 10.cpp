#include <iostream>
using namespace std;

int main() {
	int  b = 0, c = 1, d = 0, k = 0, d1 = 0;
	while (k < 1836311903) {
		b = c;
		c = d;
		d = b + c;
		k = d;
		d1 = k + c;
		cout << d << endl;
	}
	cout << d1;
	return 0;
}