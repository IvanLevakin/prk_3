#include<vector>
#include <iostream>
using namespace std;


int main()
{
	vector<int> V; string n; int N,sum=0;
	while (n != "|") {
		cin >> n;
		int x = atoi(n.c_str());
		V.push_back(x);
	}
	cout << "vvedi N";
	cin >> N;
	if (N > V.size())cout << "N bol'she chem nyjno"<<endl;
	else for (int i = 0; i <= N-1; i++) {
		sum += V[i];
	}
	cout << sum;
}

