//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int count(long long n,vector<long long>&dp){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        long long a=0;
        a+=count(n-1,dp)%1000000007;
        a+=count(n-2,dp)%1000000007;
        a+=count(n-3,dp)%1000000007;
        return dp[n]=a%1000000007;
        
    }
    long long countWays(int n)
    {
        
        // your code here
        vector<long long>dp(n+1,-1);
        return count(n,dp)%1000000007;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends