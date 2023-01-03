#include<iostream>
using namespace std;
/*
1 1 1 1
  2 2 2
    3 3
      4
*/
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
    while(col>=row){
        cout<<row;
        col--;
    }
    cout<<endl;
    row++;
    }
    return 0;
}