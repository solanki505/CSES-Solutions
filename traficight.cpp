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
    ll n,m;
    cin>>n>>m;
    vector<int>arr(m);
    for(int i=0;i<m;i++)cin>>arr[i];
    set<int>s;
    s.insert(0);
    s.insert(n);
    map<int,int>mp;
    mp[n]++;
    for(int i=0;i<m;i++){
        auto t1 = s.lower_bound(arr[i]);
        auto t2=t1;
        t1--;
        mp[*t2-*t1]--;
        if (mp[*t2-*t1]==0) mp.erase(*t2-*t1);
        mp[arr[i]-*t1]++;
        mp[*t2-arr[i]]++;
        s.insert(arr[i]);
        cout<<prev(mp.end())->first<<" ";
    }
return 0;
}