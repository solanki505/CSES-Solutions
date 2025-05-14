#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
const int MOD = 1e9 + 7;
const int TWO_MOD_INV = 500000004;
bool is_prime(long long x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

ll next_prime(long long n) {
    n++;
    while (!is_prime(n)) {
        n++;
    }
    return n;
}

signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
//int t; cin>>t;
//while(t--){}
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << next_prime(n) << endl;
    }
    return 0;
}