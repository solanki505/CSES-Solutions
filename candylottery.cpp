#include <bits/stdc++.h>
using namespace std;
#define int long long
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
int n,k,i;
cin>>n>>k;
double max=0.0;
for(i=1;i<=k;i++){
long double t1=pow((long double)i/k,n);
long double t2=pow((long double)(i-1)/k,n);
max+=i*(t1-t2);
}
cout<<fixed<<setprecision(6)<<max<<endl;
}
