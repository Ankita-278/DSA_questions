#include<iostream>
using namespace std;

int setbit(int n){
int sum=0;
while (n!=0)
{
    int bit=n&1;
    sum=sum+bit;
    n=n>>1; 
}
return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    int A=setbit(a);
    int B=setbit(b);
    int tone=A+B;
    cout<<"total number of bitset is "<<tone<<endl;
    return 0;
}