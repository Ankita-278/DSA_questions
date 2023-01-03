#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char start='A'+row-1;
        while(col<=n){
            cout<<start;
            col++;
            start++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}