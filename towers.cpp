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
    int n;
    cin>>n;
    vector<int>cubes(n);
    for(int i=0;i<n;i++)cin>>cubes[i];
    multiset<int>towers;
    for(int c:cubes){
        auto it=towers.upper_bound(c);
        if(it!=towers.end())towers.erase(it);
        towers.insert(c);
    }
    cout<<towers.size()<<'\n';
    
}