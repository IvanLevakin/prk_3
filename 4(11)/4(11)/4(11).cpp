#include <iostream>
#include<vector>
using namespace std;
int main() {
		vector<int> v; int i = 1, j, n;
		for (i; i <= 100; i++) {
			n = 0;
			for (j=2; j <= i / 2; j++)
				if (i % j == 0) {
					n = 1;
					break;
				}
			if (n == 0){
				v.push_back(i);
		}
		}
	for (n = 0; n <=v.size()-2; n++)cout << v[n+1] << " ";
	}
