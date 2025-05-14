#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
const int MOD = 1e9 + 7;
const int TWO_MOD_INV = 500000004;

ll expo(ll base, ll pow) {
	ll ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % MOD;
		base = base * base % MOD;
		pow >>= 1;
	}
	return ans;
}

ll p[100001], k[100001];

signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
//int t; cin>>t;
//while(t--){}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i] >> k[i];
	ll cnt = 1, sum = 1, prod = 1, cnt2 = 1;
	for (int i = 0; i < n; i++) {
		cnt =cnt * (k[i] + 1) % MOD;
		sum =sum * (expo(p[i], k[i] + 1) - 1) % MOD * expo(p[i] - 1, MOD - 2) % MOD;
		prod = expo(prod, k[i] + 1) *
		           expo(expo(p[i], (k[i] * (k[i] + 1) / 2)), cnt2) % MOD;
		cnt2 =cnt2 * (k[i] + 1) % (MOD - 1);
	}
	cout << cnt << ' ' <<sum << ' ' <<prod;
	return 0;
}