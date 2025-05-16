#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;

    vector<vector<double>> dp(n + 1, vector<double>(6 * n + 1, 0));
    dp[0][0] = 1;  
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= 6 * i; j++) {
            for (int k = 1; k <= 6; k++) {
                if (j - k >= 0)
                    dp[i][j] += dp[i - 1][j - k];
            }
        }
    }

    double total = pow(6, n);  
    double favorable = 0;

    for (int sum = a; sum <= b; sum++) {
        favorable += dp[n][sum];
    }

    double probability = favorable / total;
    cout << fixed << setprecision(6) << probability << endl;

    return 0;
}