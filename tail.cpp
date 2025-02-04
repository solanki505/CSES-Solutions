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
ll n;
cin>>n;
ll t=5,ans=0;
while(t<=n){
    ans+=n/t;
    t=t*5;
}
cout<<ans;
return 0;
}