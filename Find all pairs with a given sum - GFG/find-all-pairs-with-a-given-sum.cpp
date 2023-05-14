//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A,A+N);
        sort(B,B+M);
        vector<pair<int,int>>result;
           int left=0,right=M-1;
           while(left<N && right>=0){
               int target=A[left]+B[right];
               if(target==X){
                   result.push_back(make_pair(A[left],B[right]));
                   int tempA=left;
                   while(left<N && A[left]==A[tempA])
                   left++;
                   int tempB=right;
                   while(right>=0 && B[right]==B[tempB])
                   right--;
               }
              else if(target<X){
                  left++;
              }
              else{
                  right--;
              }
           }
           return result;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends