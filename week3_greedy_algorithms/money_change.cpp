#include<bits/stdc++.h>

using namespace std;

int change(int m);

int main(){

	int m;
	cin>>m;
	cout<<change(m)<<endl;
	return 0;
}

int change(int m){
	int res1 = m/10;
	int res2 = (m - res1*(10))/5;
	int res3 = (m - res2*(5) - res1*(10));

	return res1 + res2 + res3;

}