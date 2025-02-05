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
   ll n, m,curr,t;
    cin>>n>>m;
    multiset<ll, greater<int>>a;
    while(n--){
        cin>>t;
        a.insert(t);
    }
    while (m--){
        cin>>curr;
        auto it=a.lower_bound(curr);
        if(it==a.end()){
            cout<<-1<<'\n';
        }
        else{
            cout<<*it<<'\n';
            a.erase(it);
        }
    }

    return 0;
}