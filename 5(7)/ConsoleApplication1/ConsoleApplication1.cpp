#include <iostream>
#include<vector>
using namespace std;

class argyment{};

vector<float>Irina(float a, float b, float c){
	float d = ((b * b) - (4 * a * c));
	if (d >= 0) {
		float x1 = ((-b) - (sqrt(d))) / (2 * a);
		float x2 = ((-b) + (sqrt(d))) / (2 * a);
		vector<float> X;
		X.push_back(x1);
		X.push_back(x2);
		return X;
	}
	else throw argyment();
}
int main()
{
	float a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	try {
		vector<float> V;
		V = Irina(a, b, c);
		if (V[0] == V[1])cout << V[0];
		else cout << V[0] << " " << V[1];
	}
	catch (argyment) {
		cout << "cheto tam ne tak";
	}

}
