#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0;i<n;i++) cin>>a[i];
    map<int,int> mp;
    int j=0,ans=0;
    for(int i=0;i<n;i++){
        if(mp.find(a[i])==mp.end()){
            mp[a[i]]=i;
        }
        else{
            if(mp[a[i]]>=j){
                j=mp[a[i]]+1;
            }
            mp[a[i]]=i;
        }
    ans= max(ans,i-j+1);
    }
    cout<<ans<<'\n';
}