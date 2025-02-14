#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

#include <bits/stdc++.h>
#define ll long long int

using namespace std;
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

long long shortestTime(ll n, ll t, vector<ll>& nums) {
    ll lo = 0, hi = 1e18;
    ll ans = 0;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long noOfProducts = 0;

        for (int i = 0; i < n; i++) {
            noOfProducts += (mid / nums[i]);
            if (noOfProducts >= t) {
                break;
            }
        }

        if (noOfProducts >= t) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    return ans;
}

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << shortestTime(n, t, nums) <<'\n';
    return 0;
}
