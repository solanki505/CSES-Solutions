#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    int n,m;
    ll k,c=0;
    cin>>n>>m>>k;
    vector<ll>a(n);
    multiset<ll>b;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++){ll k;cin>>k;b.insert(k);}
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        auto it=b.lower_bound(a[i]-k);
        if(it!=b.end()&&*it<=a[i]+k){
            c++;
            b.erase(it);
        }
    }
    cout<<c<<'\n';
}