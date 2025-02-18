#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;


signed main(){
    ll  q;cin>>q;
    while(q--){
        ll k;cin>>k;
        ll length = 1;
        ll count = 9;
        ll start = 1;
        while(k>length*count){
        k-=length*count;
        length++;
        count*=10;
        start*=10;
    }
    start+=(k-1)/length;
    string s=to_string(start);
    cout<<s[(k-1)%length]-'0'<<'\n';
    }
}
