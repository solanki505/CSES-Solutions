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
int t; cin>>t;
vector<int>arr(t,1);
for(int i=0;i<t-1;i++){
    int a;cin>>a;
    arr[a-1]=0;
}
for(int i=0;i<t;i++){
    if(arr[i]){
        cout<<i+1;
        break;
    }
}
return 0;
}