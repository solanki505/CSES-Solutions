#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

 
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    ll n, x;
    cin>>n>>x;
    vector<ll>p(n);
    for(int i=0;i<n;i++)cin>>p[i];
    sort(p.begin(),p.end());
    int l=0,r=n-1;
    int g=0;
    while(l<=r){
        if(p[l]+p[r]<=x)l++;
        r--;
        g++;
    }
    cout<<g<<'\n';
return 0;
}