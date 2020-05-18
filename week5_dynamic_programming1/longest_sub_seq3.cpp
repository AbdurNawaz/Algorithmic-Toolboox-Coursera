#include<bits/stdc++.h>

using namespace std;

int sub_seq(int x[], int y[], int z[], int p, int q, int r);

int main(){

	int p, q, r;

	cin>>p;
	int x[p];
	for(int i=0;i<p;i++){
		cin>>x[i];
	}

	cin>>q;
	int y[q];
	for(int i=0;i<q;i++){
		cin>>y[i];
	}

	cin>>r;
	int z[r];
	for(int i=0;i<r;i++){
		cin>>z[i];
	}

	cout<<sub_seq(x, y, z, p, q, r)<<endl;

	return 0;

}

int sub_seq(int x[], int y[], int z[], int p, int q, int r){
	int D[p+1][q+1][r+1];

	for(int i=0;i<=p;i++){
		for(int j=0;j<=q;j++){
			for(int k=0;k<=r;k++){

				if(i==0||j==0||k==0){
					D[i][j][k] = 0;
					continue;
				}

				else if(x[i-1]==y[j-1] && y[j-1]==z[k-1]){
					D[i][j][k] = 1 + D[i-1][j-1][k-1];
					continue;
				}

				else{
					int max1 = max(D[i-1][j][k], D[i][j-1][k]);
					D[i][j][k]= max(max1, D[i][j][k-1]);
				}
			}
		}
	}


	return D[p][q][r];
}