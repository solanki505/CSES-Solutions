#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n;cin>>n;
    vector<ll>a(n);
    ll s=0;
    for(int i=0;i<n;i++){cin>>a[i];s+=a[i];}
    sort(a.begin(),a.end());
    ll largest=a[n-1];
    ll sum=s-largest;
    if(largest<=sum)cout<<s;
    else cout<<2*largest;
    
return 0;
}