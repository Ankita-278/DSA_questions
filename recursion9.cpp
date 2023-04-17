//reverse an array
#include<bits/stdc++.h>
using namespace std;

/*int f(int l,int r,int arr[]){
if(l>=r) return(l+r)/2;
swap(arr[l],arr[r]);
f(l+1,r+1,arr);
}
*/
int f(int i,int arr[],int n){
    if(i>=n/2) return arr[n/2];
    else
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   // f(0,n-1,arr);
    f(0,arr,n);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}