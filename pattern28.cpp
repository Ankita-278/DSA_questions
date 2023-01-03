#include<iostream>
using namespace std;
/*
      1
    2 3
  4 5 6
7 8 9 10 
*/     
int main(){
    int n;
    cin>>n;
    int start=1;
    int row=1;
    while (row<=n)
    {
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        
        int col=1;
        while(col<=row){
            cout<<start;
            col++;
            start++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}