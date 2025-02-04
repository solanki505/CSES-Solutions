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
ll n;cin>>n;
if(n==1)cout<<1;
else if(n<4)cout<<"NO SOLUTION";
else{
    if(n%2){
    ll t=n;
    while(t>0){
        cout<<t<<" ";
        t-=2;
    }
    t=n-1;
    while(t>0){
        cout<<t<<" ";
        t-=2;
    }
}
else{
   ll t=n-1;
    while(t>0){
        cout<<t<<" ";
        t-=2;
    } 
   t=n;
    while(t>0){
        cout<<t<<" ";
        t-=2;
    }
    
}}
}