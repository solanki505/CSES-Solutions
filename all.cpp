#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;


void balanceHeaps(multiset<int> &low, multiset<int> &high) {
    if (low.size() > high.size() + 1) {
        high.insert(*low.rbegin());
        low.erase(--low.end());
    } else if (high.size() > low.size()) {
        low.insert(*high.begin());
        high.erase(high.begin());
    }
}

void removeElement(multiset<int> &heap, int element) {
    auto it = heap.find(element);
    if (it != heap.end()) {
        heap.erase(it);
    }
}

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    multiset<int> low; 
    multiset<int> high; 
    for (int i = 0; i < k; ++i) {
        low.insert(arr[i]);
    }
    
    for (int i = 0; i < k / 2; ++i) {
        high.insert(*low.rbegin());
        low.erase(--low.end());
    }
    
    vector<int> medians;
    for (int i = k; i <= n; ++i) {
        medians.push_back(*low.rbegin());
        if (i == n) break;
        if (arr[i] <= *low.rbegin()) {
            low.insert(arr[i]);
        } else {
            high.insert(arr[i]);
        }
        
        if (arr[i - k] <= *low.rbegin()) {
            removeElement(low, arr[i - k]);
        } else {
            removeElement(high, arr[i - k]);
        }
        balanceHeaps(low, high);
    }
    
    for (int median : medians) {
        cout << median << " ";
    }
    cout << endl;
    
    return 0;
}
