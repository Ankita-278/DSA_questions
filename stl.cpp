#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
  cin>>x;
  string y;
  map<string,int>m;
  while(cin>>x>>y)
      switch(x){
      case 1:cin>>x;
             m[y]+=x;
             break;
      case 2:
             m.erase(y);
             break;
      case 3:
            cout<<m[y]<<endl;
  }
    return 0;
}