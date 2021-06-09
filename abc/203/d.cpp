#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int min_a = INT_MAX;
    int max_a = 0;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            min_a = min(min_a, a[i][j]);
            max_a = max(max_a, a[i][j]);
        }
    }

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    const int lim = (int)floor(k * k / 2.0) + 1;

    // binary search the lower bound of the medians of all K*K blocks
    int low = min_a;
    int up = max_a;
    while (low <= up) {
        const int mid = (low + up) / 2;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + ((a[i - 1][j - 1] > mid) ? 1 : 0);
            }
        }

        bool ok = false;
        for (int i = 0; i + k <= n; ++i) {
            for (int j = 0; j + k <= n; ++j) {
                // number of squares that are greater than mid in this K*K block
                const int num = dp[i + k][j + k] - dp[i][j + k] - dp[i + k][j] + dp[i][j];
                if (num < lim) {
                    // the median of this K*K block is less than or equal to mid
                    ok = true;
                    goto OUT;
                }
            }
        }
OUT:

        if (ok) {
            up = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;
}
