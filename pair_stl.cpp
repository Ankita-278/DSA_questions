#include<bits/stdc++.h>

using namespace std;
void explainpair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> r={1,{2,3}};
    cout<<r.first<<" "<<r.second.second<<" "<<r.second.first<<endl;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}       
int main(){
    explainpair();
    return 0;
}