#include<bits/stdc++.h>

using namespace std;

int main(){

	int s, p;
	cin>>s>>p;
	vector<pair<int, int>> segments(s);
	vector<int> points(p);
	int res[p]{0};

	for(int i=0;i<s;i++){
		cin>>segments[i].first>>segments[i].second;
	}

	for(int i=0;i<p;i++) cin>>points[i];

	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++){
			if(segments[j].first<points[i] && points[i]<segments[j].second)
				res[i]++;
		}

	}

	for(int i=0;i<p;i++) cout<<res[i]<<" ";

	return 0;
	
}