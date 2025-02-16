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
    vector<int>dp(n + 1, 1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        string a=to_string(i);
        for(char c : a){
            int digit=c-'0';
            if(digit!=0){
                dp[i]=min(dp[i], dp[i - digit] + 1);
            }
        }
    }
    cout<<dp[n]<<'\n';
    return 0;
}