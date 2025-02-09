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
ll n,q;
cin>>n>>q;
vector<ll>arr(n+1,0);
for(ll i=1;i<=n;i++)cin>>arr[i];
for(ll i=1;i<=n;i++)arr[i]+=arr[i-1];
while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<'\n';
}
return 0;
}