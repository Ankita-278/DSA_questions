#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=1;
        while(space<=row-1){
            cout<<" ";
            space++;
        }
        int col=n;
        int num=row;
        while(col>=row){
            cout<<num;
            col--;
            num++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}