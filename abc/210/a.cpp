#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    cout << std::min(n, a) * x + std::max(0, n - a) * y << endl;
}
