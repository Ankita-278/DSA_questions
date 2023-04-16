//print linearly from 1 to n(but by backtrack)
#include<iostream>
using namespace std;

void f(int i,int n){
    if(i<1)
    return;
    else
    f(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    f(n,n);
    return 0;
}