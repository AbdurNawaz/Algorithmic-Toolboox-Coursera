#include<bits/stdc++.h>

using namespace std;

int car(int s, int m, int n, int a[]);

int main(){

	int d, m, n;
	cin>>d>>m>>n;
	int x[n+2];
	x[0] = 0;
	x[n+1] = d;
	for(int i=1;i<n+1;i++) cin>>x[i];

	cout<<car(d, m, n, x)<<endl;

	return 0;
}

int car(int d, int m, int n, int a[]){
	int numRef = 0, curPos = 0, lastPos = 0; 
	while (curPos<=n){

		lastPos = curPos;
		while(curPos<=n && (a[curPos+1] - a[lastPos]<=m))
			curPos += 1;

		if(lastPos==curPos)
			return -1;

		if (curPos<=n)
			numRef += 1;
	}
	return numRef;

}
