#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

bool valid(int x, int m) {
    return x >= 1 && x <= m;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    if (a[0] == 0) {
        for (int k = 1; k <= m; k++) {
            dp[1][k] = 1;
        }
    } else {
        dp[1][a[0]] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int k = 1; k <= m; k++) {
            if (a[i - 1] != 0 && a[i - 1] != k) {
                dp[i][k] = 0;
                continue;
            }
            for (int prev = k - 1; prev <= k + 1; prev++) {
                if (valid(prev, m)) {
                    dp[i][k] = (dp[i][k] + dp[i - 1][prev]) % MOD;
                }
            }
        }
    }
    int ans = 0;
    for (int k = 1; k <= m; k++) {
        ans = (ans + dp[n][k]) % MOD;
    }
    cout << ans <<'\n';
    return 0;
}
