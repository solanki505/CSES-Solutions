#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
ll fun(int a){
    ll t=((ll) a*a*(a*a-1))/2;
    ll ways=4*(a-1)*(a-2);
    ll ans= t-ways;
    return ans;
}
signed main(){
    ll n;cin>>n;
    for(int i=1;i<=n;i++)cout<<fun(i)<<'\n';
}