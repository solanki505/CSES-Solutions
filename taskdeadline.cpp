#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
    	int a,b;
    	cin>>v[i].first>>v[i].second;
    }
     sort(v.begin(),v.end());
    ll s=0;
    ll ans=0;
    for(auto &i:v){
    	ll x=s+i.first;
    	ans+=(i.second-x);
    	s=x;
    }
    cout<<ans;
    return 0;
}
