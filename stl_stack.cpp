#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("ankita");
    s.push("kumari");
    s.push("rao");
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    return 0;
}