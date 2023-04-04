#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("ankita ");;
    q.push("kumari ");
    q.push("rao ");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size();
    return 0;
}