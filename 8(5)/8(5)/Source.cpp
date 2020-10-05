#include <iostream>
#include <vector>
using namespace std;
vector <int> father(vector <int> v) {
	vector<int>  vec; int N;
	N = v.size();
	for (int i = N - 1; i >= 0; i--)vec.push_back(v[i]);
	return vec;
}
vector<int> godfather(vector <int> &v){
	int n = v.size();
	for (int i = n - 1; i >= 0; i--) {
		v.push_back(v[i]);
	}
	auto begin = v.cbegin();
	auto end = v.cend();
	v.erase(begin,end-n);
		return v;
}
int main(){
	vector<int> v = { 1,3,5,7 };
	vector <int> vec=godfather(v);
	int N = v.size();
	for (int i = 0; i <=N-1; i++)cout << v[i] << ' ';
}