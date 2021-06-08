#include <bits/stdc++.h>
using namespace std;
using u64 = uint64_t;

int main()
{
    int n;
    cin >> n;
    vector<u64> a(n);
    vector<u64> ma(n); // current max of a
    u64 mai = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mai = max(mai, a[i]);
        ma[i] = mai;
    }

    // prefix sum of a
    vector<u64> pre(a);
    for (int i = 1; i < n; ++i) {
        pre[i] += pre[i - 1];
    }

    u64 sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pre[i];
        cout << sum + (i + 1) * ma[i] << endl;
    }
}
