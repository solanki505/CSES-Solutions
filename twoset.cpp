#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    ll n;cin>>n;
    if((n*(n+1)/2)%2)cout<<"NO";
    else{
        vector<ll>a,b;
        ll s=(n*(n+1)/2)/2;
        ll i=n;
        for(ll i=n;i>=1;i--){
            if(s-i>=0){
                s -= i;
                a.push_back(i);
            }
            else b.push_back(i);
        }
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
        cout<<'\n';
        cout<<b.size()<<'\n';
        for(int i=0;i<b.size();i++)cout<<b[i]<<" ";
    }
}