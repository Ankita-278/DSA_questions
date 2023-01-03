#include<iostream>
using namespace std;

int fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=2;i<n;i++){
      int ans=a+b;
        a=b;
        b=ans;
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    cout<<"the fibonacci series is "<<fibonacci(n)<<endl;
    return 0;
}