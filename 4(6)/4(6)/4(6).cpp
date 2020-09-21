#include<vector>
#include <iostream>
using namespace std;
int main()
{
    vector<string> s(10); string n; int g = -1,t;
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
    cin >> n;
    vector<string> a;
    a.push_back(n);
    for (int i = 0; i <= 9; i++) {
        if (s[i] == a[0])g = i;
        else if (g < 0)t = atoi(n.c_str());
    }
 if (g >= 0)cout << g + 1;
 else cout << s[t - 1];
 return 0;
}
