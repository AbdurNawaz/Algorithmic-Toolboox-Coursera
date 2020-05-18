#include<bits/stdc++.h>

using namespace std;

int fib_num_last(int n);

int main(){

    int n;
    cin>>n;
    cout<<fib_num_last(n)<<endl;
    return 0;

}

int fib_num_last(int n){
    int F[n+1];
    F[0] = 0;
    F[1] = 1;

    for(int i=2;i<n+1;i++)
    	F[i] = (F[i-1] + F[i-2])%10;


    return F[n];
}