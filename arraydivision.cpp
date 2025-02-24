#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int inf = 1e9;
int mod = 1e9 + 7;
ll n,k;
vector<ll> a;

bool check(ll X) {
    int t= 1;
    ll sum=0;
    for(int i=0;i<n;i++) {
        sum+=a[i];
        if(sum>X){
            t++;
            sum = a[i];
        }
    }
    return t<=k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k;
    a.resize(n);
    ll lo=0,hi=0;
    for(int i=0;i<n; i++) {
        cin>>a[i];
        lo=max(lo,a[i]);
        hi+=a[i];
    }
    while(lo<=hi) {
        ll mid=lo+(hi-lo)/2;
        if(check(mid))hi=mid-1;
        else lo=mid+1;
    }
    cout<<lo<<"\n";

    return 0;
}