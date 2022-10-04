//Coin change minimum coins required to give change

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> coin, int n, int sum, vector<vector<int>> &t){
	for(int i=2; i<n+1; i++){
		for(int j=1; j<sum+1; j++){
			if(coin[i-1]<=j){
				t[i][j] = min(1+t[i][j-coin[i-1]], t[i-1][j]);
			}
			else{
				t[i][j] = t[i-1][j];
			}
		}
	}
	return t[n][sum];
}

int main(){
	int n = 2;
	vector<int> coin = {1,2};
	int sum = 2;
	vector<vector<int>> t(n+1, vector<int> (sum+1, INT_MAX-1));
	for(int i=1; i<n+1; i++){
		t[i][0] = 0;
	}

	//Initialise 2nd row from index 1 manually.
	for(int j=1; j<sum+1; j++){
		if(j%coin[0]==0){
			t[1][j] = j/coin[0];
		}
		else{
			t[1][j] = INT_MAX-1;
		}
	}
	cout<<solve(coin, n, sum, t)<<"\n";
	return 0;
}