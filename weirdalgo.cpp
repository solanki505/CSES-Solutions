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
long long t; cin>>t;
while(t!=1){
    cout<<t<<" ";
    if(t%2)t=t*3+1;
    else t=t/2;
}
cout<<1;
return 0;
}