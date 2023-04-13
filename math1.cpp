//Given a number N. Count the number of digits in N which evenly divides N.
#include<iostream>
using namespace std;
int evenlyDivides(int N){
      int count=0,a=N;
      while(N){
          int rem=N%10;
          if(rem!=0 && a%rem==0)
          count++;
          N=N/10;
      }
      return count;
    }
int main(){
    int N;
    cin>>N;
    cout<<evenlyDivides(N)<<endl;
    return 0;
}