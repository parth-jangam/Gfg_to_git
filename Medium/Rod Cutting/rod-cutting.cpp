//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int max_val(int price[], int n,int i,int size,vector<int>&dp){
      
      if(n<0){
          return INT_MIN;
      }
      if(n==0){
          return 0;
      }
      if(i>=size){
          return INT_MIN;
      }
      if(dp[n]!=-1){
          return dp[n];
      }
      int take=0;
      if(n-(i+1)>=0){
          take=price[i]+max(max_val(price,n-(i+1),i+1,size,dp),max_val(price,n-(i+1),i,size,dp));
      }
      int not_take=max_val(price,n,i+1,size,dp);
      return dp[n]= max(take,not_take);
  }
    int cutRod(int price[], int n) {
        //code here
        vector<int>dp(1001,-1);
        return max_val(price,n,0,n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends