//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxi(int arr[], int n,int i,int prev,vector<vector<int>>&dp){
	    if(i>=n){
	        return 0;
	    }
	    if(dp[i][prev+1]!=-1){
	        return dp[i][prev+1];
	    }
	    int sum=0;
	    if(prev==-1 || arr[prev]<arr[i]){
	        sum+=max(arr[i]+maxi(arr,n,i+1,i,dp),maxi(arr,n,i+1,prev,dp));
	    }
	    else{
	        sum+=maxi(arr,n,i+1,prev,dp);
	    }
	    return dp[i][prev+1]= sum;
	}
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
	    return maxi(arr,n,0,-1,dp);
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
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends