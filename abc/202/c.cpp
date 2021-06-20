#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1), c(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> c[i];
    }

    vector<int> cnt(n + 1, 0);
    for (int j = 1; j <= n; ++j) {
        ++cnt[b[c[j]]];
    }

    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += cnt[a[i]];
    }

    cout << ans << endl;
}
