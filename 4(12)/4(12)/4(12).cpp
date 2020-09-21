#include <iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v,r; int i ,p=2, j, n, N;

	//int p = 2, n, i;
	cin >> n;
	for (i = 1; i <= n-1; i++) {
		r.push_back(i);
			if (r[i - 1] % p != 0)v.push_back(r[i - 1]);
	}
	for (int j = 0; j <= v.size() - 2; j++)cout << v[j - 1] << " ";
/*	cin >> N;
	for (i; i <= N; i++) {
		n = 0;
		for (j = 2; j <= i / 2; j++)
			if (i % j == 0) {
				n = 1;
				break;
			}
		if (n == 0) {
			v.push_back(i);
		}
	}
	for (n = 0; n <= v.size() - 2; n++)cout << v[n + 1] << " ";
}
int p = 2, n, i;
cin >> n;
for (i = 1; i <= n; i++) {
	r.bush_bakc(i)
	if (r[i-1] % p != 0)v.push_bakc(r[i-1]);*/
}