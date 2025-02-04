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
int ans=0,t=0;
for(int i=0;s[i]!='\0';i++){
    t++;
    if(s[i]!=s[i+1]){
        ans=max(ans,t);
        t=0;
    }
}
cout<<ans;
return 0;
}