#include<bits/stdc++.h>

using namespace std;

pair<int, int> partition(vector<int>&A, int l, int r);
void quick3sort(vector<int> &A, int l, int r);

int main(){

	int n;
	cin>>n;
	vector<int>x(n);

	for(int i=0;i<n;i++)cin>>x[i];

	quick3sort(x, 0, n-1);
	
	for(int i=0;i<n;i++)cout<<x[i]<<" ";
	
	return 0;

}

pair<int, int> partition(vector<int> &A, int l, int r){
	int x = A[l];
	int j = l;
	for(int i=l+1;i<=r;i++){
		if(x>=A[i]){
			j++;
			swap(A[i], A[j]);
		}
	}
	swap(A[l], A[j]);
	int m = j-1;
	for(int i=l;i<j && m>=l && m>i;){

		if(A[i]==A[j]) swap(A[i], A[m--]);
		else i++;

	}

	m++;
	return make_pair(m, j);
}

void quick3sort(vector<int> &A, int l, int r){

	if(l>=r) return;

	int k = l + rand()%(r-l+1);
	swap(A[l], A[k]);
	pair<int, int> m = partition(A, l, r);

	quick3sort(A, l, m.first-1);
	quick3sort(A, m.second+1, r);
}