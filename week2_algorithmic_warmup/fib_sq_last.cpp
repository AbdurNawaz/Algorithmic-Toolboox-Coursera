#include<bits/stdc++.h>

using namespace std;

long long pisano_period(long long m);
int solve(long long n, long long m);

int main(){

    long long n;
    cin>>n;
    cout<<solve(n, 10)*solve(n+1, 10)%10<<endl;
    return 0;
}

long long pisano_period(long long m){
    long long a=0, b=1, c=a+b;
    for(int i=0;i<m*m;i++){
        c = (a+b)%m;
        a = b;
        b = c;
        if(a==0 && b==1) return i+1;
    }
}

int solve(long long n, long long m){
    long long remainder = n%pisano_period(m);
    long long f1 = 0, f2 = 1, f = remainder;
    for(int  i=1;i<remainder;i++){
        f = (f1+f2)%m;
        f1 = f2;
        f2 = f;
    }

    return f%m;
}