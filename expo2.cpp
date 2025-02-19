#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
long long exp(ll x,ll y,ll m) {
    if(x==0 & y==0) return 1;
    ll a=1;
    while(y>0){
        if(y&1)a=(a*x)%m;
        x=(x*x)%m;
        y>>=1;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        ll m = 1e9+7;
        ll a = exp(y,z,m-1);
        cout<<exp(x,a,m)<<'\n';
    }
}