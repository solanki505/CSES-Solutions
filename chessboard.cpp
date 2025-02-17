#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;
signed main(){
    vector<string>arr(8);
	for(int i=0;i<8;i++)cin>>arr[i];
	int count=0;
	vector<int>col(8);
	iota(col.begin(),col.end(),0);
	do{
		bool valid = true;
		for(int i = 0; i < 8; i++){
			if(arr[i][col[i]]!='.'){
				valid=false;
                break;
            }       
		}
		vector<bool>diagonalOccupied(15,false);
		for(int i=0;i<8;i++){
			if(diagonalOccupied[i+col[i]])valid=false;
			diagonalOccupied[i+col[i]]=true;
		}
		for(int i=0;i<15;i++)diagonalOccupied[i]=false;
		for(int i=0;i<8;i++){
			if (diagonalOccupied[i+7-col[i]])valid=false;
			diagonalOccupied[i+7-col[i]]=true;
		}
		count+=valid;
	}while(next_permutation(col.begin(),col.end()));
	cout<<count;
}