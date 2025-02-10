#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    ll n, x;
    cin>>n>>x;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<ll>dp(x+1,inf);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-arr[j]>=0){
                dp[i]=min(dp[i],dp[i-arr[j]]+1);
            }
        }
    }
    
    if(dp[x]==inf){
        cout<<-1;
    }
    else cout<<dp[x]; 
    
}