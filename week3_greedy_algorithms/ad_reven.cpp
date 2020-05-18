#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	for(size_t i=0;i<n;i++)cin>>a[i];
	for(size_t i=0;i<n;i++)cin>>b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	long long res = 0;
	for(size_t i=0;i<n;i++) res += (long long)sa[i]*b[i];

	cout<<res<<endl;
	
	return 0;

}
