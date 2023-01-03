#include<iostream>
using namespace std;

 int Arithmetic(int n){
     int AP;
    AP=((3*n)+7);
    return AP;

 }
int main(){
    int n;
    cin>>n;
    int ans=Arithmetic(n);
    cout<<ans<<endl;
    return 0;
}