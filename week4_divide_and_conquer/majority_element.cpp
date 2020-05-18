#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	bool m = false;
	cin>>n;

	map<int, int> x;
	int y[n];

	for(int i=0;i<n;i++){
		cin>>y[i];
		x[y[i]]++;
	}

	for(int i=0;i<n;i++){
		if(x[y[i]]>n/2) m=true;
	}

	cout<<m;


}