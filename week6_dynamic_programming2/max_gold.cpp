#include<bits/stdc++.h>

using namespace std;

int max_weight(int W, int n, vector<int> weights);

int main(){

	int W, n;
	cin>>W>>n;
	vector<int> weights(n);
	for(int i=0;i<n;i++){
		cin>>weights[i];
	}

	cout<<max_weight(W, n, weights);
}

int max_weight(int W, int n, vector<int>weights){
	vector<vector<int>>  K(n + 1,vector<int>(W + 1));

	for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){

			if(i==0||j==0) K[i][j]=0;

			else if(weights[i-1]<=j)
				K[i][j] = max(weights[i-1] + K[i-1][j-weights[i-1]], K[i-1][j]);

			else
				K[i][j] = K[i-1][j];
		}
	}

	return K[n][W];
}