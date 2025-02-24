#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#define ll long long int
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;cin>>x>>n;
	priority_queue<int, vector<int>, greater<int>>p;
	for (int i = 0; i < n; i++) {
		int a;
		cin>>a;
		p.push(a);
	}
	ll ans=0;
	for (int i=1;i<n;i++){
		int a=p.top();
		p.pop();
		int b=p.top();
		p.pop();
		p.push(a+b);
		ans+=a+b;
	}
	cout<<ans;
    return 0;
}
