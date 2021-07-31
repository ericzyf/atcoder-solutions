#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    map<int, int> m;
    for (int i = 0; i < k; ++i) {
        ++m[c[i]];
    }

    unsigned ans = m.size();
    for (int i = k; i < n; ++i) {
        int j = i - k;
        ++m[c[i]];
        if (--m[c[j]] == 0) {
            m.erase(c[j]);
        }
        ans = max<unsigned>(ans, m.size());
    }

    cout << ans << endl;
}
