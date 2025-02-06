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
string s;cin>>s;
set<string>sk;
sort(s.begin(),s.end());
 do {
        sk.insert(s);
    } while(next_permutation(s.begin(),s.end()));
cout<<sk.size()<<'\n';
for(auto i:sk){
    cout<<i<<'\n';
}
return 0;
}