#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
void g(int n)
{
    for(int i=0;i<(1<<n);i++){
        int val=(i^(i>>1));
        bitset<32> r(val);
        string s=r.to_string();
        cout<<s.substr(32-n)<<"\n";
    }
}
 
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n;cin>>n;
g(n);
return 0;
}