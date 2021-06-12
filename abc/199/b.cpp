#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_a = 0, min_b = 1001;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        max_a = max(max_a, a);
    }
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        min_b = min(min_b, b);
    }

    cout << max(0, min_b - max_a + 1) << endl;
}
