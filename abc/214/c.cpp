#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n), t(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    vector<int> ans(t);
    for (int i = 0; i < n*2; ++i) {
        ans[(i+1)%n] = min(ans[(i+1)%n], ans[i%n] + s[i%n]);
    }

    for (auto a : ans) {
        cout << a << endl;
    }
}
