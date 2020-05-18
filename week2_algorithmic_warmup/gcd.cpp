#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main(){

    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
    return 0;

}

int gcd(int a, int b){
    if(b==0) return a;
    int ap;

    ap = a%b;
    return gcd(b, ap);
}