#include<bits/stdc++.h>

using namespace std;

int edit_dist(string s1, string s2, int n, int m);

int main(){

	string s1, s2;

	cin>>s1>>s2;

	cout<<edit_dist(s1, s2, s1.size(), s2.size())<<endl;

	return 0;
}

int edit_dist(string s1, string s2, int n, int m){

	int D[m+1][n+1] = {0};

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0) D[i][j] = j;

			else if(j==0) D[i][j] = i;

			else if(s2[i-1] == s1[j-1]) D[i][j] = D[i-1][j-1];

			else
				D[i][j] = 1+min(min(D[i-1][j], D[i][j-1]), D[i-1][j-1]);
		}
	}

	return D[m][n];


}