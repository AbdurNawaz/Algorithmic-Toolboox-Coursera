#include<bits/stdc++.h>

using namespace std;

struct Segment {
    int start, end;
};

bool sortFunction(Segment i, Segment j) { return (i.end < j.end); }

void solve(vector<Segment>lines, vector<int>&segments);

int main(){
	int n;
	cin>>n;
	vector<Segment>lines(n);
	vector<int> segments;

	for(int i=0;i<n;i++)cin>>lines[i].start>>lines[i].end;

	solve(lines, segments);
	
	cout<<segments.size()<<endl;
	for(int i=0;i<segments.size();i++)cout<<segments[i]<<" ";

	return 0;

}

void solve(vector<Segment>lines, vector<int> &segments){

	sort(lines.begin(), lines.end(), sortFunction);

	int point = lines[0].end;
	segments.push_back(point);

	for(size_t i=1;i<lines.size();i++){
		if(point<lines[i].start || point>lines[i].end){
			point = lines[i].end;
			segments.push_back(point);
		}
	}
}
