#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m= 1e6;
const ll MOD = 1e9+7;
int n, a, b;
ll fact[m+1], inv[m+1];

ll inverse(ll x){
    ll res = 1;
    ll expo = MOD-2;
    while(expo > 0){
        if(expo&1)
            res = (res * x) % MOD;
        x = (x * x) % MOD;
        expo >>= 1;
    }
    return res;
}

void fun(){
    fact[0] = inv[0] = 1;
    for(int i = 1; i <= m; i++){
        fact[i] = i * fact[i-1] % MOD;
        inv[i] = inverse(fact[i]);
    }
}

int main(){
    fun();
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%lld\n", fact[a] * inv[b] % MOD * inv[a-b] % MOD);
    }
}