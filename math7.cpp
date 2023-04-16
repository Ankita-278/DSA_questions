//Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
//Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

//Note: Return -1 if you can't reach the end of the array.
#include<iostream>
using namespace std;

int jump(int arr[],int n){
    int reachable=0;
    int curr=0;
    int count=0;
    for(int i=0;i<n-1;i++){
        reachable=max(reachable,i+arr[i]);
        if(i==curr){
            count++;
            curr=reachable;
            if(curr>=n-1)
            return count;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
 cout<<jump(arr,n);
    return 0;
}

