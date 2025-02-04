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
ll n,ans=0;
cin>>n;
vector<ll>arr(n);
for(ll i=0;i<n;i++)cin>>arr[i];
for(ll i=1;i<n;i++){
    if(arr[i]<arr[i-1]){ans=ans+(arr[i-1]-arr[i]);
        arr[i]=arr[i-1];
    }
}
cout<<ans;
return 0;
}