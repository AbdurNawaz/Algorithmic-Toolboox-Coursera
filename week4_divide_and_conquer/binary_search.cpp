#include<bits/stdc++.h>

using namespace std;

int binary_search(int A[], int low, int high, int key);

int main(){
	int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++)cin>>x[i];
	int k;
	cin>>k;
	int y[k];
	for(int i=0;i<k;i++)cin>>y[i];
	for(int i=0;i<k;i++){
		int key = y[i];
		cout<<binary_search(x, 0, n, key)<<" ";
	}

	return 0;
}

int binary_search(int A[], int low, int high, int key){
	if(low>high) return -1;

	int mid  = low + (high-low)/2;

	if(key == A[mid]) return mid;

	else if(key>A[mid]) return binary_search(A, mid+1, high, key);

	else return binary_search(A, low, mid-1, key);
}