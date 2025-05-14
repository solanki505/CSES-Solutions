#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
const int MOD = 1e9 + 7;
const int MAX_N = 1000000;

vector<long long> fact(MAX_N + 1, 1), invFact(MAX_N + 1, 1);

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void preprocess() {
    for (int i = 2; i <= MAX_N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX_N] = modExp(fact[MAX_N], MOD - 2, MOD); 
    for (int i = MAX_N - 1; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}


signed main(){
 ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
//int t; cin>>t;
//while(t--){}
    preprocess(); 
    
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    long long result = fact[s.length()];
    for (auto [ch, f] : freq) {
        result = (result * invFact[f]) % MOD;
    }

    cout << result << endl;
    return 0;
}
    