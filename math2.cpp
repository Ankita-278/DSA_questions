//Given a 32 bit number X, reverse its binary form and print the answer in decimal.
#include<iostream>
using namespace std;
long long reversedBits(long long X) {
       int long long ans=0;
       for(int i=0;i<32;i++){
           ans<<=1;
           ans=ans|(X&1);
           X>>=1;
           
       }
       return ans;
    }
int main(){
    int x;
    cin>>x;
    cout<<reversedBits(x);
    return 0;
}