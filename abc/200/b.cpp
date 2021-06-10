#include <bits/stdc++.h>
using namespace std;
using u64 = uint64_t;

int main()
{
    u64 n, k;
    cin >> n >> k;
    while (k > 0) {
        if (n % 200 == 0) {
            n /= 200;
        } else {
            n = n * 1000 + 200;
        }
        --k;
    }
    cout << n << endl;
}
