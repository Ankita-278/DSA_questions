/*Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place.
*/
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int n=arr.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
arr.clear();
for(int i=1;i<=n;i++){
    arr.push_back(mpp[i]);
}
}
};
int main(){
    int N,P;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>P;
    solution ob;
    ob.frequencyCount(arr,N,P);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
