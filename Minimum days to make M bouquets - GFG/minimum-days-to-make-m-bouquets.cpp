//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

bool possible(vector<int> &bloomDay,int day,int m,int k){
    int cnt=0,noofb=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            cnt++;
        }
        else{
            noofb+=(cnt/k);
            cnt=0;
        }
    }
    noofb+=(cnt/k);
    return noofb>=m;
}
class Solution {
  public:
    int solve(int M, int K, vector<int> &bloomDay){
      long long val=M*1LL*K*1LL;
      if(val>bloomDay.size()) return -1;
      int mini=INT_MAX;
      int maxi=INT_MIN;
      for(int i=0;i<bloomDay.size();i++){
          mini=min(mini,bloomDay[i]);
          maxi=max(maxi,bloomDay[i]);
      }
      int low=mini,high=maxi;
      while(low<=high){
          int mid=(low+high)/2;
          if(possible(bloomDay,mid,M,K)){
              high=mid-1;
          }
          else low=mid+1;
      }
      return low;
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends