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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll s=0;
    sort(v.begin(),v.end());
    ll t=v[n/2];
    for(ll i=0;i<n;i++)s+=abs(v[i]-t);
    cout<<s;
return 0;
}