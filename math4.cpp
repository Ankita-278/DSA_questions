//Given two numbers A and B. The task is to find out their LCM and GCD.
#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    if(a==b)
    return a;
    if(a<b)
    return gcd(a,b-a);
    if(a>b)
    return gcd(a-b,b);
}
vector<int> lcmAndgcd(int A,int B){
    int GCD=gcd(A,B);
    int LCM=A*B/GCD;
    return {LCM,GCD};
}
int main(){
    int a,b;
    cin>>a>>b;
    vector<int> ans=lcmAndgcd(a,b);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}