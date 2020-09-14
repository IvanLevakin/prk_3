#include<vector>
#include <iostream>
using namespace std;


int main()
{
	vector<double> V,R; string n; int N;double r,sum = 0;
	while (n != "|") {
		cin >> n;
		double x = atof(n.c_str());
		V.push_back(x);
	}
	cout << "vvedi N";
	cin >> N;
	if (N > V.size())cout << "N bol'she chem nyjno" << endl;
	else for (int i = 0; i <= N - 1; i++) {
		sum += V[i];
		r = V[i + 1] - V[i];
			R.push_back(r);
	}
	cout << sum<<endl;
	for (int i = 0; i <= N - 1; i++)cout << R[i]<<" ";
}
