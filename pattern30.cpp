#include<iostream>
using namespace std;
/*


1234554321
1234**4321
123****321
12******21
1********1


*/
int main(){
    int n;
    cin>>n;
    int row=1;
   while (row<=n)
   {
    //triangle 1
    int col=1;
    while(col<=n-row+1)
    {
        cout<<col;
        col++;
    }
    //triangle 2
    int star=2*(row-1);
    while(star){
        cout<<"*";
        star--;
    }
    //triangle 3
    int col1=n-row+1;
    while (col1)
    {
     cout<<col1;
     col1--;
    }
   cout<<endl;
   row++ ;
   }
return 0;
}