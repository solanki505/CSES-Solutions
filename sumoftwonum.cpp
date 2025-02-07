#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;++i){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr.begin(), arr.end());

    ll l=0,r=n-1;
    while(l<r){
        ll sum=arr[l].first+arr[r].first;
        if(sum==x){
            cout<<arr[l].second<<" "<<arr[r].second<<"\n";
            return 0;
        }
        else if(sum<x) ++l;
        else --r;
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}