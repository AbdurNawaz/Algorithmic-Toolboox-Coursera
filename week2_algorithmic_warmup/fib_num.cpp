#include<bits/stdc++.h>

using namespace std;

int fib(int n);

int main(){

    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}

int fib(int n){
    int F[n+1];
    F[0] = 0;
    F[1] = 1;

    for(int i=2;i<n+1;i++)
        F[i] = (F[i-1] + F[i-2]);

    return F[n];

}