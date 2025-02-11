#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

ll fun(ll i,ll *arr,ll s1,ll s2,ll n){
    if(i==n)return abs(s1-s2);
    ll c=fun(i+1,arr,s1+arr[i],s2,n);
    ll t=fun(i+1,arr,s1,s2+arr[i],n);
    return min(c,t);
}

signed main(){
    ll n;cin>>n;
    ll p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<fun(0,p,0,0,n);
}