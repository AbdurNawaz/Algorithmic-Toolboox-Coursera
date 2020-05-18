#include<bits/stdc++.h>

using namespace std;

int sub_seq(string s1, string s2, int n, int m);

int main(){

	string s1 = "", s2 = "";
	int n, m, t;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		s1 += t;
	}

	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		s2 += t;
	}

	cout<<sub_seq(s1, s2, n, m)<<endl;

	return 0;

}

int sub_seq(string s1, string s2, int n, int m){
	int D[n+1][m+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0)
				D[i][j] = 0;
			else if(s1[i-1]==s2[j-1])
				D[i][j] = 1 + D[i-1][j-1];
			else
				D[i][j] = max(D[i-1][j], D[i][j-1]);
		}
	}

	return D[n][m];
}