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
    vector<pair<ll,ll>>m(n);
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        m[i]={b,a};
    }
    sort(m.begin(),m.end());
    ll c=0;
    ll la=0;
    for(int i=0;i<n;i++){
        if(m[i].second>=la){
            c++;
            la=m[i].first;
        }
    }
    
    cout<<c<<'\n';
    return 0;
}
