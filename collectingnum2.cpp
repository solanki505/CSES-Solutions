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
    ll n,m;cin>>n>>m;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    vector<ll>idx(n+1);
    for (int i=0;i<n;i++){
        idx[arr[i]]=i;
    }
    ll ans=1;
    for(int num=1;num<n;num++) {
        if (idx[num+1]<idx[num])ans++;
    }
    while(m--){
    ll a,b;
    cin>>a>>b;a--;b--;
    if(idx[arr[a]-1]<=idx[arr[a]] && b<idx[arr[a]-1])ans++;
    if(idx[arr[a]-1]>idx[arr[a]] && b>=idx[arr[a]-1])ans--;
    if(idx[arr[a]+1] >= idx[arr[a]] && b>idx[arr[a]+1])ans++;
    if(idx[arr[a]+1] < idx[arr[a]] && b<=idx[arr[a]+1])ans--;
    idx[arr[a]]=b;
    if(idx[arr[b]-1]<=idx[arr[b]] && a <idx[arr[b]-1])ans++;
    if(idx[arr[b]-1]>idx[arr[b]] && a>=idx[arr[b]-1])ans--;
    if(idx[arr[b]+1] >=idx[arr[b]] && a >idx[arr[b]+1])ans++;
    if(idx[arr[b]+1] <idx[arr[b]] && a <=idx[arr[b]+1])ans--;
    idx[arr[b]]=a;
    swap(arr[a],arr[b]);
    cout<<ans<<'\n';
    }
}