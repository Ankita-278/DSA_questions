//Given an integer, check whether it is a palindrome or not.
#include<iostream>
using namespace std;

 string is_palindrome(int n)
    {
        int y=n;
    if(n<0){
        return"No";
    }
    int temp=0;
    while(y>0){
        temp=temp*10+y%10;
        y=y/10;
    }
    if(temp==n){
        return "Yes";
    }
    else{
        return "No";
    }
    }
int main(){
    int a;
    cin>>a;
    cout<<is_palindrome(a);
    return 0;
}