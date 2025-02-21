#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 100010;
const int inf = 1e9;
const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++) {
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            ll sum = a[i].first + a[l].first + a[r].first;
            if (sum == x) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            } else if (sum < x) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}