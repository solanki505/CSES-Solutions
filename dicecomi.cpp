#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
ll solve(ll n, vector<ll>&dp){
    if(n==0) return 1;
    else if(n<0)return 0;
    else if(dp[n]!=-1)return dp[n];
    ll ans=0;
    for(int i=1;i<=6;i++){
        ans+=solve(n-i,dp);
        ans%=mod;
    }
    return dp[n]=ans;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    vector<ll>dp(n+1,-1);
    cout<<solve(n,dp);
    return 0;
}