#include<bits/stdc++.h>

using namespace std;

int change(int money, int n, int coins[]);

int main(){
	int money;
	int coins[3] = {1, 3, 4};
	cin>>money;
	cout<<change(money, 3, coins)<<endl;

	return 0;
}

int change(int money, int n, int coins[]){

	vector<int> ways(money+1, INT_MAX);
	ways[0] = 0;

	for(int i=1;i<=money;i++){
		for(int j=0;j<n;j++){
			if(i>=coins[j]){
				int sub_res = ways[i - coins[j]];
				if(sub_res!=INT_MAX && sub_res+1<ways[i])
					ways[i] = sub_res+1;
			}
		}

	}

	return ways[money];

}