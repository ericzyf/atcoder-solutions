#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        char c = *it;
        if (c == '6' || c == '9') {
            c ^= '6' ^ '9';
        }
        cout << c;
    }
    cout << endl;
}
