//calculator
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':cout<<"addition"<<(a+b)<<endl;
        break;
    case '-':cout<<"substraction"<<(a-b)<<endl;
        break;
    case '*':cout<<"multiplication"<<(a*b)<<endl;
        break;
    case '/':cout<<"divison"<<(a/b)<<endl;
        break;    
    default:
        break;
    }
    return 0;
}