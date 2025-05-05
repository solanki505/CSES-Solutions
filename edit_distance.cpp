#include <bits/stdc++.h>
using namespace std;

string a, b;
vector<vector<int>> dp;

int rec(int i, int j) {
    if(i==0)return j;
    if(j==0)return i;
    if(dp[i][j]!=-1)return dp[i][j];
    if (a[i-1]==b[j-1]) 
        return dp[i][j]=rec(i-1,j-1);
    return dp[i][j] = min({rec(i-1,j)+1, 
                           rec(i,j-1)+1,
                           rec(i-1,j-1)+1});
}

int main() {
    cin>>a>> b;
    int n=a.size(),m=b.size();
    dp.assign(n+1,vector<int>(m+1,-1)); 
    cout<<rec(n,m)<<'\n';
    return 0;
}