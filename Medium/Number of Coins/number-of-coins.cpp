//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mini(int coins[], int M, int V,int i,vector<vector<int>>&dp){
	    
	    if(V==0){
	        return 0;
	    }
	    
	    if(V<0){
	        return 1000006;
	    }
	    if(i>=M){
	        return 1000006;
	    }
	    if(dp[i][V]!=-1){
	        return dp[i][V];
	    }
	    int pick=1000006,not_pick=1000006;
	    if(coins[i]<=V){
	        pick=1+mini(coins,M,V-coins[i],i+1,dp);
	        pick= min((1+mini(coins,M,V-coins[i],i+1,dp)),1+mini(coins,M,V-coins[i],i,dp));
	    }
	    not_pick=mini(coins,M,V,i+1,dp);
	    return dp[i][V]=min(pick,not_pick);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M+1,vector<int>((1000000/M)+2,-1));
	    int x=mini(coins,M,V,0,dp);
	    if(x==1000006){
	        return -1;
	    }
	    return x;
	    
	    
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends