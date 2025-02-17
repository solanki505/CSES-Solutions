#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    ll n;cin>>n;
    ll a[n],p[n];
    for(int i=0;i<n;i++){cin>>a[i];p[i]=a[i];}
    sort(a,a+n);
    ll i,t=1;
    for( i=0;i<n;i++){
        if(a[i]>t)break;
        t+=a[i];
    }
    cout<<t;
}