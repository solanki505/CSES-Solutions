#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#define ll long long int
using namespace std;
signed main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int m=a[n/2];
    ll ans=0;
    for (int i=0;i<n;i++)ans+=abs(m-a[i]);
    cout<<ans;
    
}