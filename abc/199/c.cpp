#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    string s;
    cin >> n >> s >> q;
    bool swapped = false;
    for (int i = 0; i < q; ++i) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1) {
            if (swapped) {
                a = (a <= n) ? (n + a) : (a - n);
                b = (b <= n) ? (n + b) : (b - n);
            }
            swap(s[a - 1], s[b - 1]);
        } else {
            swapped = !swapped;
        }
    }
    if (swapped) {
        for (int i = 0; i < n; ++i) {
            swap(s[i], s[i + n]);
        }
    }
    cout << s << endl;
}
