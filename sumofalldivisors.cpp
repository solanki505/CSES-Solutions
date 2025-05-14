#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
const int MOD = 1e9 + 7;
const int TWO_MOD_INV = 500000004;
long long total_sum(long long start, long long end) {
	return ((((end - start + 1) % MOD) * ((start + end) % MOD) % MOD) * TWO_MOD_INV %
	        MOD);
}

signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
//int t; cin>>t;
//while(t--){}
  ll n;cin>>n;
	ll total = 0;
	ll at = 1;
	while (at <= n) {
		ll add_amt = n / at; 
		ll last_same = n / add_amt;
		total = (total + add_amt * total_sum(at, last_same)) % MOD;
		at = last_same + 1;
	}

	cout << total << '\n';
return 0;
}