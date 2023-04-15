//For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
#include<iostream>
using namespace std;

string armstronganumber(int n){
    int temp=n;
    int ans=0;
    while(n!=0){
        int r=n%10;
        ans=ans+(r*r*r);
        n=n/10;
    }
    if(ans==temp)
    return "yes";
    else
    return "no";
}
int main(){
    int n;
    cin>>n;
    cout<<armstronganumber(n);
    return 0;
}