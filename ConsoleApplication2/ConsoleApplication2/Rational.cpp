#include "Rational.h"
#include "functions.h"

Rational::Rational(int num, int den) {
	
	if (num > 0 && den > 0 || num < 0 && den < 0) {
		numerator = abs(num);
		denominator = abs(den);
		return;
	}
	else if (den == 0) {
		cout << "Erorr";
		return;
	}
	numerator = -abs(num);
	denominator = abs(den);
}


Rational Rational::add(const Rational& right) const {
	int num1 = numerator * right.denominator;
	int num2 = right.numerator * denominator;
	int den = denominator * right.denominator;
	int num = num1 + num2;
	int d = NOD(num, den);
	return Rational(num / d, den / d);
}

Rational operator + (const Rational& left, const Rational& right) {
	Rational result = left.add(right);
	return result;
}

//a += b
void operator += (Rational& left, const Rational& right) {
	left = left.add(right);
}
  

Rational Rational::sub(const Rational& right) const {
	int num1 = numerator * right.denominator;
	int num2 = right.numerator * denominator;
	int den = denominator * right.denominator;
	int num = num1 - num2;
	int d = NOD(num, den);
	return Rational(num / d, den / d);
}

Rational operator - (const Rational& left, const Rational& right) {
	Rational result = left.sub(right);
	return result;
}

//a -= b
void operator -= (Rational& left, const Rational& right) {
	left = left.sub(right);
}






Rational operator * (const Rational& left, const Rational& right) {
	Rational result = left.mult(right);
	return result;
}

//a *= b
void operator *= (Rational& left, const Rational& right) {
	left = left.mult(right);
}


Rational Rational::mult(const Rational& right) const {
	int num1 = right.numerator * numerator;
	int num2 = right.denominator * denominator;
	int den = num2;
	int num = num1;
	int d = NOD(num, den);
	return Rational(num / d, den / d);
}




Rational Rational::div(const Rational& right) const {
	int num1 = numerator * right.denominator;
	int num2 = right.numerator * denominator;
	int den = num2;
	int num = num1;
	int d = NOD(num, den);
	return Rational(num / d, den / d);
	
}

Rational operator / (const Rational& left, const Rational& right) {
	Rational result = left.div(right);
	return result;
}

//a /= b
void operator /= (Rational& left, const Rational& right) {
	left = left.div(right);
}



bool Rational::equalTo(const Rational& right)  {
	int num1 = NOD(right.numerator, right.denominator);
	int num2 = NOD(numerator, denominator);
		if (num1 == num2)
			return true;
		else 
			return false;
	return Rational();
}

Rational operator + (const Rational& left, const Rational& right) {
	Rational result = left.add(right);
	return result;
}

Rational::operator string() const {
	string result = to_string(numerator);

	if (denominator == 1) return result;

	result += "/" + to_string(denominator);
	return result;
}

ostream& operator << (ostream& os, const Rational& a) {
	string s = string(a);
	os << s;
	return os;
}
