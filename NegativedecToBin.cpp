#include<iostream>
#include<math.h>
//#include<bitset>
using namespace std;

int main(){
  /*  int n;
    cin>>n;
    bitset<32>x(n);
    cout<<x;
    */
   int n;
   int i=0;
   int ans=0;
   cout<<"enter the number"<<endl;
   cin>>n;
   n=abs(n);
   n=n^(-1);//1s compliment
   n=n+1;//2s compliement
   int a=9;
   while (a>=0)
   {
    int bit=n&1;
    ans=(bit*powf(10,i))+ans;
    n=n>>1;
    i++;
    a--;
   }
   cout<<"answer is "<<ans<<endl;
   
    return 0;
}