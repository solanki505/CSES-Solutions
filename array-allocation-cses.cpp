#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
vector<vector<int>>dp(1e6+1,vector<int>(2,0));
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        dp[n][0]=1;
        dp[n][1]=1;
        for(int i=n-1;i>0;i--){
            dp[i][0]=(2LL*dp[i+1][0]+dp[i+1][1])%mod;
            dp[i][1]=(4LL*dp[i+1][1]+dp[i+1][0])%mod;
        }
        cout<<(dp[1][0]+dp[1][1])%mod<<'\n';
    }
}

