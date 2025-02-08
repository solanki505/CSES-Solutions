#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
ll power(ll base, ll exponent){
    if(exponent==0) return 1;
    if(exponent==1)return base%mod;
    ll temp=power(base,exponent/2);
    if(exponent%2==0) return (temp * temp) % mod;
    else  return (((temp * temp) %mod) * base) %mod;
}
signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll n;cin>>n;
while(n--){
    ll a,b;
    cin>>a>>b;
    cout<<power(a,b)<<"\n";
}
return 0;
}