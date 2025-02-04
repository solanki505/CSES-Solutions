#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
string s;
cin>>s;
map<char,int>mp;
for(int i=0;i<s.length();i++){
    mp[s[i]]++;
}
int c=0;
    char ch=0;
    for(auto i:mp){
        if(i.second%2){
            c++;
            ch=i.first;
        }
    
    }
if(c>1)cout<<"NO SOLUTION";
else{
    string half="";
        for (auto i : mp) {
            half+=string(i.second/2,i.first);
        }
        string rev_half = half;
        reverse(rev_half.begin(), rev_half.end());
        if(c==1){
            cout<<half+string(1,ch)+rev_half;
        }else{
            cout<<half+rev_half;
        }
}
return 0;
}