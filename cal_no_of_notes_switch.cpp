#include<iostream>
using namespace std;

int main(){
    int amt;
    int a,b,c,d;
    cout<<"enter the value of the amount"<<endl;
    cin>>amt;
    int ans=0;
    int notes;
    //cout<<"enter the amt of the notes"<<endl;
    //cin>>notes;
    switch(notes){
    case 100:a=(amt/100);
         amt=amt%100;
         cout<<"number of 100 notes "<<a<<endl;
    case 50:b=(amt/50);
            amt=amt%50;
            cout<<"number of 50 notes "<<b<<endl;
    case 20:c=(amt/20);
           amt=amt%20;
           cout<<"number of 20 notes"<<c<<endl;
    case 1:d=(amt/1);
           amt=amt%1;
           cout<<"number of 1 notes"<<d<<endl;
   // default :cout<<"enter the correct note"<<endl;
    }
    cout<<a+b+c+d<<endl;
    return 0;
}