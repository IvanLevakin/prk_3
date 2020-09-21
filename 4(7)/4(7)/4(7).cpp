#include<vector>
#include <iostream>
using namespace std;
int main()
{
    vector<string> s(10); string n, n1; int m, g = -1, f = -1, t, o; char c; vector<string> a, b;
    s[0] = "one";
    s[1] = "two";
    s[2] = "three";
    s[3] = "four";
    s[4] = "five";
    s[5] = "six";
    s[6] = "seven";
    s[7] = "eight";
    s[8] = "nine";
    s[9] = "ten";
    cin >> n >> n1 >> c;
    a.push_back(n);
    b.push_back(n1);
    for (int i = 0; i <= 9; i++) {
        if (s[i] == a[0])g = i;
        if (s[i] == b[0])f = i;
        if (g < 0)t = atoi(n.c_str());
        if (f < 0)o = atoi(n1.c_str());
    }
 if (g >= 0)t = g + 1;
 if (f >= 0)o = f + 1;
 if (c == '+')m = t + o;
 if (c == '-')m = t - o;
 if (c == '*')m = t * o;
 if (c == '/') {
     if (o != 0)m = t / o;
     else cout << "error";
 }
 cout << m;
 return 0;
}