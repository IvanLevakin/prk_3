#include <iostream>
#include <vector>

using namespace std;

int main() {
	int max;
	cin >> max;
	int N = max;
	vector<bool>simple(N, true);

	for (int i = 2; i * i <= N; ++i)
		if (simple[i] == true)
			for (int j = i * i; j < N; j += i)
				simple[j] = false;

	for (int i = 2; i < N; ++i)
		if (simple[i] == true)
			cout << i << ' ';
}