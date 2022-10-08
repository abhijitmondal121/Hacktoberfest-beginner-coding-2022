//Coin change maximum number of ways to return change

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> coin, int n, int sum, vector<vector<int>> &t){
	for(int i=1; i<n+1; i++){
		for(int j=1; j<sum+1; j++){
			if(coin[i-1]<=j){
				t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
			}
			else{
				t[i][j] = t[i-1][j];
			}
		}
	}
	return t[n][sum];
}

int main(){
	int n = 3;
	vector<int> coin = {1,2,5};
	int sum = 5;
	vector<vector<int>> t(n+1, vector<int> (sum+1, 0));
	for(int i=0; i<n+1; i++){
		t[i][0] = 1;
	}
	cout<<solve(coin, n, sum, t)<<"\n";


	return 0;
}