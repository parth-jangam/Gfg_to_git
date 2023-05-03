//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1000000007;
	int coutt(int arr[], int n, int sum,int i,vector<vector<int>>&dp){
	    if(sum==0){
	        if(arr[n-1]==0){
	            return 2;
	        }
	        return 1;
	    }
	    if(i>=n){
	        return 0;
	    }
	    
	    if(sum<0){
	        return 0;
	    }
	    if(dp[i][sum]!=-1){
	        return dp[i][sum];
	    }
	    int pick=0,not_pick=0;
	    if(sum-arr[i]>=0){
	        pick=coutt(arr,n,sum-arr[i],i+1,dp);
	    }
	    not_pick=coutt(arr,n,sum,i+1,dp);
	    return dp[i][sum]= (pick%mod+not_pick%mod)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return coutt(arr,n,sum,0,dp)%mod;
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends