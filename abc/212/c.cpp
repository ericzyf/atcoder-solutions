#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = INT_MAX;
    int x = 0, y = 0;
    while ((x < n) && (y < m)) {
        ans = min(ans, abs(a[x] - b[y]));
        if (a[x] > b[y]) {
            ++y;
        } else {
            ++x;
        }
    }

    cout << ans << endl;
}
