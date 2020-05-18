#include<bits/stdc++.h>

using namespace std;

int main(){

	long long n;
	cin>>n;
	vector<int>x;
	long long  K = 0;
	for(int i=1;1;i++){
		if(n-i>i){
			x.push_back(i);
			K++;
			n-=i;
		}
		else{
			x.push_back(n);
			K++;
			break;
		}
	}
	cout<<K<<endl;
	for(int i=0;i<x.size();i++)cout<<x[i]<<" ";
}