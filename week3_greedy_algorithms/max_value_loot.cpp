#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, W;
	cin>>n>>W;
	vector<pair<int, int>>vw(n);
	vector<pair<double, int>>vpw(n);
	for(int i=0;i<n;i++){
		cin>>vw[i].first>>vw[i].second;
		vpw[i].first = 1.0*vw[i].first/vw[i].second;
		vpw[i].second = vw[i].second;
	}

	sort(vpw.begin(), vpw.end(), greater<pair<double, int>>());
	double res = 0;

	for(int i=0;i<vpw.size() && W>0;i++){
		res += min(vpw[i].second, W)*vpw[i].first;
		W -= min(vpw[i].second, W);
	}

	cout<<fixed<<setprecision(4)<<res<<endl;

}
