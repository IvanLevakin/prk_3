#include <iostream>
#include "Rational.h"
#include "functions.h"

using namespace std;

int main()
{
    Rational a, b(1), c(1, 2);
    a = b / c;
    a /= b;

    string s = string(a);
    cout << a << endl;
    cout << s << endl;

    return 0;
}
