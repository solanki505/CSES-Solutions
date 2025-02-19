#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll n;
    cin>>n;
    vector<pair<ll, ll>> customers(n);
    vector<ll> roomAllocation(n);
    for(int i=0;i<n;i++)cin>>customers[i].first>>customers[i].second;
    vector<tuple<ll, ll, ll>> events; 
    for (int i = 0; i < n; i++) {
        events.push_back({customers[i].first, 0, i});
        events.push_back({customers[i].second, 1, i});
    }
    sort(events.begin(), events.end());
 
    ll roomCount = 0;
    ll currentRooms = 0;
    priority_queue<ll, vector<ll>, greater<ll>> availableRooms;
    for (const auto& event : events) {
        ll time, type, index;
        tie(time, type, index) = event;
        if (type == 0) { // arrival
            if (!availableRooms.empty()) {
                roomAllocation[index] = availableRooms.top();
                availableRooms.pop();
            } else {
                roomAllocation[index] = ++roomCount;
            }
            currentRooms++;
        } else { // departure
            availableRooms.push(roomAllocation[index]);
            currentRooms--;
        }
    }
 
    cout<<roomCount<<"\n";
    for (int i=0;i<n;i++) {
        cout<<roomAllocation[i]<<" ";
    }
    cout<<"\n";
 
    return 0;
}
