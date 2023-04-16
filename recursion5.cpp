//print from n to 1 using backtrack
#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n)
    return;
    else
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}