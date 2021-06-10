#include <bits/stdc++.h>
using namespace std;

bool check(const string& s, const int* p)
{
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'o' && p[i] == 0 || s[i] == 'x' && p[i] == 1) {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;

    int p[10];
    int cnt = 0;
    for (int a = 0; a <= 9; ++a) {
        for (int b = 0; b <= 9; ++b) {
            for (int c = 0; c <= 9; ++c) {
                for (int d = 0; d <= 9; ++d) {
                    memset(p, 0, sizeof(p));
                    p[a] = p[b] = p[c] = p[d] = 1;
                    if (check(s, p)) {
                        ++cnt;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
}
