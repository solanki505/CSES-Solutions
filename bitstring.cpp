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
ll result=1;
    for(int i=0;i<n;++i){
        result=(result*2)%mod;
    }
    
    cout<<result;
return 0;
}