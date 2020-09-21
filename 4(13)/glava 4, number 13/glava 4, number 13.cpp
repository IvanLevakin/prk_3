#include <iostream>
#include <vector>

using namespace std;

int main() {
	const int N = 100;
	vector<bool>simple(N, true);
	
	for (int i = 2; i * i <= N; ++i) 
		if (simple[i] == true) 
			for (int j = i * i; j < N; j += i) 
				simple[j] = false;

	for (int i = 2; i < N; ++i) 
		if (simple[i] == true) 
			cout << i << ' ';
}