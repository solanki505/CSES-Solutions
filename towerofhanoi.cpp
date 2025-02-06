#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

void moveDisk(int diskno,vector<vector<int>>&moves,int source, int destination,int auxiliary){
    if(diskno==1){
        moves.push_back({source,destination});
        return;
    }
    moveDisk(diskno-1,moves,source,auxiliary,destination);
    moves.push_back({source,destination});
    moveDisk(diskno-1,moves,auxiliary,destination,source);
}
void towerOfHanoi(int n)
{
    vector<vector<int>>m;
    int source=1,destination=3,auxiliary=2;
    moveDisk(n,m,source,destination,auxiliary);
    cout<<m.size()<<"\n";
    for(auto i: m) {
        cout<<i[0]<<" "<<i[1]<<"\n";
    }
}
signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t; cin>>t;
towerOfHanoi(t);
return 0;
}