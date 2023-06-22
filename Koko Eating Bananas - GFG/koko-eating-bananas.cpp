//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int findMax(int N,vector<int>& piles){
    int maxi=INT_MIN;
    for(int i=0;i<N;i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}

int calculatetotalhours(int N,vector<int>& piles,int H){
    int totalH=0;
    for(int i=0;i<N;i++){
        totalH+=ceil((double)piles[i]/(double)H);
    }
    return totalH;
}
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        int low=1,high=findMax(N,piles);
        while(low<=high){
            int mid=(low+high)/2;
            int totalH=calculatetotalhours(N,piles,mid);
            if(totalH<=H){
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
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends