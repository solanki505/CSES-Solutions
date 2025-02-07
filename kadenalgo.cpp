#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;++i)cin>>arr[i];
    ll ans=arr[0];
    ll m= arr[0];
    for (int i=1;i<n;i++) {
        m=max(m+arr[i],arr[i]);
        ans=max(ans,m);
    }
    cout<<ans;
    return 0;
}