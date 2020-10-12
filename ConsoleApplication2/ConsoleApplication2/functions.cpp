#include "functions.h"

int NOD(int a, int b) {
	a = abs(a);
	b = abs(b);

	int res = 1;
	for (int i = 1; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) res = i;
	}

	return res;
}
