//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
//   
  int mini(int arr[], int n,int i,int sum1,int sum,vector<vector<int>>&dp){
      if(i>=n){
        //   return max(sum1,sum2)-min(sum1,sum2);
          return abs(sum-(2*sum1));
      }
    //   if(i>n){
    //       return INT_MAX;
    //   }
      if(dp[i][sum1]!=-1){
          return dp[i][sum1];
      }
      return dp[i][sum1]=min(mini(arr,n,i+1,sum1+arr[i],sum,dp),mini(arr,n,i+1,sum1,sum,dp));
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	   // 
	   int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        vector<vector<int>>dp(n+1,vector<int>(sum,-1));
	    return mini(arr,n,0,0,sum,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends