#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;
int mod = 1e9 + 7;

signed main(){
    int t;
    cin>>t;
    queue<ll>q;
    for(int i=1;i<=t;i++)q.push(i);
    bool f=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        if(f)cout<<x<<" ";
        else q.push(x);
        f=!f;
    }
    return 0;
}
