#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
void g(ll y,ll x){
    ll i=max(x,y);
    if(i%2==0){
      if(x>y)cout<<(i-1)*(i-1)+y<<'\n';
      else cout<<(i*i)-x+1<<'\n';
    }
    else{
        if(x>y)cout<<(i*i)-y+1<<'\n';
        else cout<<(i-1)*(i-1)+x<<'\n';
    }
}
 
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll t;cin>>t;
while(t--){
    ll i,j;
    cin>>i>>j;
    g(i,j);
}
return 0;
}