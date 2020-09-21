#include <iostream> 
#include <string> 
using namespace std;
int main() {
	double a, b; string z;
	cin >> z >> a >> b;
	if (z != "+" and z != "-" and z != "*" and z != "/" and z != "plus" and z != "minus" and z != "div" and z != "mul") {
		cout << "Error";
	}
	if (z == "+") {
		cout << a + b;
	}
	if (z == "plus") {
		cout << a + b;
	}
	if (z == "-") {
		cout << a - b;
	}
	if (z == "minus") {
		cout << a - b;
	}
	if (z == "mul") {
		cout << a * b;
	}
	if (z == "*") {
		cout << a * b;
	}
	if (z == "div") {
		cout << a / b;
	}
	if (z == "/") {
		cout << a / b;
	}
}