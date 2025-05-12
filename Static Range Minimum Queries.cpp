#include <bits/stdc++.h>
using namespace std;
#define int long long 

#define INF INT_MAX
#define ll long long

const int N = 200005;
vector<int> segTree(4 * N); 
void build(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        segTree[n + i] = arr[i];
    }
    for (int i = n - 1; i > 0; i--) {
        segTree[i] = min(segTree[2 * i], segTree[2 * i + 1]);
    }
}

int query(int l, int r, int n) {
    l += n;
    r += n;
    int result = INF;
    while (l <= r) {
        if (l % 2 == 1) result = min(result, segTree[l++]);
        if (r % 2 == 0) result = min(result, segTree[r--]);
        l /= 2;
        r /= 2;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    build(arr, n);
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << query(a - 1, b - 1, n) << "\n";
    }

    return 0;
}