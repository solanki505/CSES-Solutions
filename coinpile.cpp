#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    ll t;cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==0 && b!=0 || a*2<b)cout<<"NO\n";
        else if(b==0 && a!=0 ||b*2<a)cout<<"NO\n";
        else if((a+b)%3==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}