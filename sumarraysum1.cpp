#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    int n;ll x;cin>>n>>x;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    ll l=0,r=-1;
    ll sum=0,c=0;
    while(r<n){
        while(r<n && sum<x){
            r++; sum+=arr[r];
        }
        while(l<=r && sum>x){
            sum-=arr[l]; l++;
        }
        if(sum==x){
            c++;
            sum-=arr[l];
            l++;
        }
    }
    cout<<c;
}