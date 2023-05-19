//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    int i=0,start=0,end=0;
    while(i<n-1 && price[i]>price[i+1])
    i++;
    int flag=0;
    while(i<n-1){
        start=i;
        while(i<n-1 && price[i]<price[i+1])
        i++;
        end=i;
        if(start!=end){
            cout<<"("<<start<<" "<<end<<")"<<" ";
            flag=1;
        }
        i++;
    }
    if(!flag)
    cout<<"No Profit"<<endl;
    else
    cout<<endl;
}