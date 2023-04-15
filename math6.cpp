//Given a positive integer N., The task is to find the value of    \sum_{i=1}^{i=n} F(i)  where function F(i) for the number i be defined as the sum of all divisors of ‘i‘.
#include<iostream>
using namespace std;

 long long sumOfDivisors(int N)
    {
        int n=N;
        int long ans=0;
        for(int i=1;i<=n;i++){
            int div=N/i;
            ans=ans+i*div;
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    cout<<sumOfDivisors(n);
    return 0;
}