#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define LD long double

int inf = 1e9;
int mod = 1e9 + 7;
const int N = 200005;
vector<int> segTree(4 * N);  

void build(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) segTree[n + i] = arr[i];
    for (int i = n - 1; i > 0; i--) segTree[i] = segTree[2 * i] + segTree[2 * i + 1];
}

void update(int k, int u, int n) {
    k += n;
    segTree[k] = u;
    for (k /= 2; k > 0; k /= 2) segTree[k] = segTree[2 * k] + segTree[2 * k + 1];
}

int query(int l, int r, int n) {
    l += n;
    r += n;
    int sum = 0;
    while (l <= r) {
        if (l % 2 == 1) sum += segTree[l++];
        if (r % 2 == 0) sum += segTree[r--];
        l /= 2;
        r /= 2;
    }
    return sum;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    build(arr, n);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int k, u;
            cin >> k >> u;
            update(k - 1, u, n);
        } else {
            int a, b;
            cin >> a >> b;
            cout << query(a - 1, b - 1, n) << "\n";
        }
    }

    return 0;
}