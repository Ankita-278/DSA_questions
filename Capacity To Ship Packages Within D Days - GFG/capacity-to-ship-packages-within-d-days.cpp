//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
int finddays(int arr[],int n,int cap){
    int days=1,load=0;
    for(int i=0;i<n;i++){
        if(arr[i]+load>cap){
            days+=1;
            load=arr[i];
        }
        else{
            load+=arr[i];
        }
    }
    return days;
}
class Solution {
  public:
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int low=*max_element(arr,arr+N);
        int high=accumulate(arr,arr+N,0);
        while(low<=high){
            int mid=(low+high)/2;
            int numberofdays=finddays(arr,N,mid);
            if(numberofdays<=D){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends