#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
ll fun(ll arr[], int n){
    ll ans=1;
    vector<ll>idx(n+1);
    for (int i=0;i<n;i++){
        idx[arr[i]]=i;
    }
    for(int num=1;num<n;num++) {
        if (idx[num+1]<idx[num])ans++;
    }
    return ans;
}
signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    ll v[n];
    for(ll i=0;i<n;i++)cin>>v[i];
    cout<<fun(v,n);
}