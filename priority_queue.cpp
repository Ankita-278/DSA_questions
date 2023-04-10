#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater <int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    pq.emplace(4);
    pq.pop();
    cout<<pq.top();
    return 0;
}