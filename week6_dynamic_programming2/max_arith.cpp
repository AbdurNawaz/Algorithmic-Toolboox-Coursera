#include<bits/stdc++.h>

using namespace std;

long long makeOper(long long op1, long long op2, char op);
long long max_arith(const string &s);

int main(){

	string s;
	cin>>s;

	cout<<max_arith(s)<<endl;
}


long long makeOper(long long op1, long long op2, char op){
	if (op == '*')
		return op1 * op2;
	else if (op == '+')
		return op1 + op2;
	else if (op == '-')
		return op1 - op2;

}


long long max_arith(const string &s1){
	int numOperands = (s1.size()+1)/2;

	long long Min[numOperands][numOperands];
	long long Max[numOperands][numOperands];

	memset(Min, 0, sizeof(Min));
	memset(Max, 0, sizeof(Max));

	for(int i=0;i<numOperands;i++){
		Min[i][i] = stoll(s1.substr(2*i, 1));
		Max[i][i] = stoll(s1.substr(2*i, 1));
	}

	for(int s=0;s<numOperands-1;s++){
		for(int i=0;i<numOperands-s-1;i++){
			int j = i+s+1;
			long long MinVal = LLONG_MAX;
			long long MaxVal = LLONG_MIN;

			for(int k=i;k<j;k++){

				long long a = makeOper(Min[i][k], Min[k+1][j], s1[2*k+1]);
				long long b = makeOper(Min[i][k], Max[k+1][j], s1[2*k+1]);
				long long c = makeOper(Max[i][k], Min[k+1][j], s1[2*k+1]);
				long long d = makeOper(Max[i][k], Max[k+1][j], s1[2*k+1]);

				MinVal = min(MinVal, min(a, min(b, min(c, d))));
				MaxVal = max(MaxVal, max(a, max(b, max(c, d))));

			}

			Min[i][j] = MinVal;
			Max[i][j] = MaxVal;
		}
	}

	return Max[0][numOperands-1];
}
