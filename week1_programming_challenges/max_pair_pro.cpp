#include<bits/stdc++.h>

using namespace std;

long long maxpairpro(int a[], int n);

int main(){
	int n;
	long long result;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++) cin>>x[i];
	result = maxpairpro(x, n);
	cout<<result<<endl;
	return 0;
}

long long maxpairpro(int a[], int n){
	long long res = 0;
	int ind1, ind2, i;
	ind1 = -1;
	for(i=0;i<n;i++){
		if(ind1==-1||a[i]>a[ind1]) ind1 = i;
	}

	ind2 = -1;
	for(i=0;i<n;i++){
		if(ind1 != i && (ind2 == -1||a[i]>a[ind2])) ind2 = i;
	}

	res = ((long long)a[ind1])*a[ind2];
	return res;
}