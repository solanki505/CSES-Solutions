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
    ll sum=0;
    ll count=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==x) count++;
        if(mp.find(sum-x)!=mp.end()){
            count+=mp[sum-x];
        }
        mp[sum]++;
    }
    cout<<count;

    return 0;
}
