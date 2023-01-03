#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int i;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"the sum of all even number "<<sum <<endl;
    return 0;
}