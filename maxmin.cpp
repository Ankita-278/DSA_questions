#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int max= INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;

}
int getMin(int arr[],int n){
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<getMax(arr,size)<<endl;
    cout<<getMin(arr,size)<<endl;
    return 0;
}