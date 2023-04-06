#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="ankita";
    m[13]="rao";
    m[2]="kumari";
    m.insert({5,"amu"});
    for(auto i:m){
cout<<i.first<<" "<<i.second<<endl;
    }
cout<<"finding 13 "<<m.count(13)<<endl;
m.erase(13);
for(auto i:m){
cout<<i.first<<" "<<i.second<<endl;
}
auto it=m.find(5);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}
    return 0;
}