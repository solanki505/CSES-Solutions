#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(501, vector<int>(501, INT_MAX));
int solve(int a,int b){
    if(a>b) swap(a,b);
    if(dp[a][b]!=INT_MAX)return dp[a][b];
    if(a == b) return dp[a][b] = 0;
    if(a == 1 || b == 1)    return dp[a][b]=(a== 1 ? b-1 : a-1);
    for(int i = 1; i < a; i++)
        dp[a][b] = min(dp[a][b], solve(i, b) + solve(a-i, b) + 1);
    for(int i = 1; i < b; i++)
        dp[a][b] = min(dp[a][b], solve(a, i) + solve(a, b-i) + 1);
    return dp[a][b];
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<solve(a,b);
}
