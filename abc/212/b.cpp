#include <bits/stdc++.h>
using namespace std;

bool isSame(const string& s)
{
    for (int i = 1; i < 4; ++i) {
        if (s[i] != s[0]) {
            return false;
        }
    }
    return true;
}

bool isFollow(const string& s)
{
    for (int i = 1; i < 4; ++i) {
        int x1 = s[i-1] - '0';
        int x2 = s[i] - '0';
        if ((x1 + 1) % 10 != x2) {
            return false;
        }
    }
    return true;
}

int main()
{
    string x;
    cin >> x;
    cout << ((isSame(x) || isFollow(x)) ? "Weak\n" : "Strong\n");
}
