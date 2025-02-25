#include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    vector<vector<ll>>dp(n,vector<ll>(n,0));
    for(int i=0;i<n;i++){
        if(s[i][0]== '*')break;
        dp[i][0]=1;
    }
    for(int j=0;j<n;j++){
        if(s[0][j]=='*')break;
        dp[0][j] = 1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(s[i][j]=='*')
                continue;
            dp[i][j]=(dp[i - 1][j]+dp[i][j-1])%mod;
        }
    }
    cout<<dp[n-1][n-1];
}