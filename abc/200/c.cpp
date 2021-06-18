#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cnt(200, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ++cnt[a % 200];
    }
    uint64_t ans = 0;
    for (auto c : cnt) {
        uint64_t x = c;
        ans += (x * (x - 1)) / 2;
    }
    cout << ans << endl;
}
