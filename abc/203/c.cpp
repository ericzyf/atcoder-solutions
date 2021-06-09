#include <bits/stdc++.h>
using namespace std;
using u64 = uint64_t;

int main()
{
    int n;
    u64 k;
    cin >> n >> k;
    map<u64, u64> rewards;
    for (int i = 0; i < n; ++i) {
        u64 a, b;
        cin >> a >> b;
        rewards[a] += b;
    }

    for (const auto& r : rewards) {
        if (k < r.first) {
            break;
        }
        k += r.second;
    }

    cout << k << endl;
}
