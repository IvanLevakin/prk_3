
#include <iostream>
using namespace std;
bool check(int number) {
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
        if (check(i) == true)
            cout << i << " ";

}


