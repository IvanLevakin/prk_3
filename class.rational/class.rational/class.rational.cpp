#pragma once
#include <iostream>
using namespace std;
class Rational
{
	int numerator; // Числитель дроби
	int denominator; // Знаменатель дроби
public:
	Rational(int num, int den);
	explicit Rational(int num);
	Rational();
	Rational add(const Rational& right) const;
	Rational sub(const Rational& right) const;
	Rational mult(const Rational& right) const;
	Rational div(const Rational& right) const;
	bool equalTo(const Rational& right) const;
	bool moreThan(const Rational& right) const;
	bool lessThan(const Rational& right) const;
	bool isInteger() const;
	operator string() const;
	operator double() const;
};
istream& operator >> (istream&, Rational&);
ostream& operator << (ostream&, const Rational&);
Rational operator + (const Rational& left, const Rational& right);
void operator += (Rational& left, const Rational& right);
Rational operator - (const Rational& left, const Rational& right);
void operator -= (Rational& left, const Rational& right);
Rational operator * (const Rational& left, const Rational& right);
void operator *= (Rational& left, const Rational& right);
Rational operator / (const Rational& left, const Rational& right);
void operator /= (Rational& left, const Rational& right);
bool operator == (const Rational& left, const Rational& right);
bool operator > (const Rational& left, const Rational& right);
bool operator < (const Rational& left, const Rational& right);
bool operator >= (const Rational& left, const Rational& right);
bool operator <= (const Rational& left, const Rational& right);
При реализации методов класса удобно будет использовать функции для нахождения
НОД и НОК двух чисел :
int NOK(int a, int b);
int NOD(int a, int b);