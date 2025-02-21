#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 100010;
const int mod = 1e9 + 7;



int main(){
    ll n,i;
    cin>>n;
    vector<ll>v(n+1);
    v[0]=1;v[1]=0;v[2]=1;
    for(i=3;i<=n;i++){
        v[i]=(i-1)*(v[i-1]+v[i-2])%mod;
    }
    cout<<v[n]<<'\n';
}