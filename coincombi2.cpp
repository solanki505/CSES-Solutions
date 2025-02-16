#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;


signed main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0; i < n; i++){
        cin>>a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(x + 1));
    for(int i = 0; i < n; i++){
        dp[i][0] = 1;
    }
    for(int i = n - 1; i >= 0; i--){
        for(int sum = 1; sum <= x; sum++){
            int skipping = dp[i + 1][sum];
            int picking = 0;
            if(a[i] <= sum){
                picking = dp[i][sum - a[i]];
            }
            dp[i][sum] = (skipping + picking)%mod;
        }
    }
    cout<<dp[0][x]<<'\n';
    return 0;
}