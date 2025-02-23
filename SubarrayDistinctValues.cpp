#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    ll x;cin>>n>>x;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    map<ll,ll>mp;
    ll l=0,r=0,c=0,d=0;
    for(r=0;r<n;r++){
        if(mp[arr[r]]==0)d++;
        mp[arr[r]]++;
        while(d>x){
            mp[arr[l]]--;
            if(mp[arr[l]]==0) d--;
            l++;
        }
        c+=(r-l+1);
    }
    cout<<c;
    return 0;
}
