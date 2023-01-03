#include<iostream>
using namespace std;

void reverse(int arr[],int n){
int start=0;
int end=n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,size);
    printArray(arr,size);
    return 0;
}