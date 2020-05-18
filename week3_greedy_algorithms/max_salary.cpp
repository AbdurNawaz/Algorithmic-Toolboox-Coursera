#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s, res;
	cin>>n;
	string x[n];
	for(int i=0;i<n;i++) cin>>x[i];

	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(x[j]+x[j+1] < x[j+1]+x[j]){
				swap(x[j], x[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++)res+=x[i];
	cout<<res;
}