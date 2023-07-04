//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int mini(int cost[], int N, int W,int i,vector<vector<int>>&dp){
	    if(W==0){
	        return 0;
	    }
	    if(W<0){
	        return 1e9;
	    }
	    if(i>=N){
	        return 1e9;
	    }
	    if(dp[i][W]!=-1){
	        return dp[i][W];
	    }
	    int take=1e9;
	    if(cost[i]!=-1){
	       take=cost[i]+mini(cost,N,W-(i+1),i,dp);
	    }
	    
	    int not_take=mini(cost,N,W,i+1,dp);
	    return dp[i][W]= min(take,not_take);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        vector<vector<int>>dp(N+1,vector<int>(W+1,-1));
        int ans=mini(cost,N,W,0,dp);
        if(ans<0 || ans==1e9){
            return -1;
        }
        
        return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends