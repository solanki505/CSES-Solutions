#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;
int mod = 1e9 + 7;

const int m= 1e6;

int main(){
    ll n,i,j;
    cin>>n;
    vector<int>a(1000005,0);
    for(i=1;i<1000005;i++){
        for(j=i;j<1000005;j+=i){
            a[j]++;
        }
    } 
while(n--){
    ll k;
    cin>>k;
    cout<<a[k]<<'\n';
}
}