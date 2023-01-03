#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key)
    return 1;
  }
  return 0;
}
int main(){
   int size;
   cin>>size;
   int arr[100];
   for(int i=0;i<size;i++) {
    cin>>arr[i];
   }
   int key;
   cin>>key;
   bool ans=search(arr,size,key);
   if(ans){
    cout<<"key is present"<<endl;
   }
   else{
    cout<<"key is absent"<<endl; 
   }
    return 0;
}