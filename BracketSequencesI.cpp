#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;
int mod = 1e9 + 7;
ll modExp(ll x, ll y, ll p) {
    ll res = 1; 
    x = x % p;  
    while (y > 0) {
        if (y & 1) 
            res = (res * x) % p; 
        y = y >> 1;
        x = (x * x) % p;  
    }
    return res;
}

ll modInverse(ll n, ll p) {
    return modExp(n, p - 2, p);
}

ll findCatalan(int n) {
    ll res = 1;
    for(ll i=2;i<=n;i++){
      res=((res*(4*i-2))%mod);
      res=(res * modInverse(i + 1, mod)) % mod; 
    }
    return res;
}
signed main(){
    ll t;
    cin>>t;
    if(t%2==0)cout<<findCatalan(t/2);
    else cout<<0;
}
