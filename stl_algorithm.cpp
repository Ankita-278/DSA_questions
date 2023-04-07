#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),1)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;

    string x="abcd";
    reverse(x.begin(),x.end());
    cout<<x<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate "<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    
        return 0;
}