#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(begin(a), end(a));
    cout << ((a[0] + a[2] == 2 * a[1]) ? "Yes" : "No") << endl;
}
