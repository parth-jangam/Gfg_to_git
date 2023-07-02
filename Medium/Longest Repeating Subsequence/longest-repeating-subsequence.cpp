//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int lrs(string str,int i,int j,vector<vector<int>>&dp){
	        if(i==0 && j==0){
	           // if(str[i]==str[j])return 1;
	            return 0;
	        }
	        if(i==0 && j>0){
	            if(str[i]==str[j])return 1;
	            else return 0;
	        }
	        if(j==0 && i>0){
	            if(str[i]==str[j])return 1;
	            else return 0;
	        }
	        if(dp[i][j]!=0){
	            return dp[i][j];
	        }
	        int a=0;
	        int b=0;
	        if(str[i]==str[j] && i!=j){
	            a=1+lrs(str,i-1,j-1,dp);
	        }
	        else{
	            b=max(lrs(str,i-1,j,dp),lrs(str,i,j-1,dp));
	        }
	        return dp[i][j]= max(a,b);
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		  //  int m=str.length();
		  //  int n=str.length();
		  //  vector<vector<int>>dp(m+2,vector<int>(n+2,0));
		    
		    
		  //  dp[0][0]=0;
		  //  int i,j;
		  //  for(int i=1;i<m;i++){
		  //      j=0;
		  //      if(str[i]==str[j]){
		  //          dp[i][j]=1;
		  //      }
		  //      else{
		  //          dp[i][j]=0;
		  //      }
		  //  }
		  //   for(int j=1;j<m;j++){
		  //      i=0;
		  //      if(str[i]==str[j]){
		  //          dp[i][j]=1;
		  //      }
		  //      else{
		  //          dp[i][j]=0;
		  //      }
		  //  }
		    
		  //  for(i=1;i<m;i++){
		  //      for(j=1;j<n;j++){
		  //          int a=0;
	   //             int b=0;
	   //             if(str[i]==str[j] && i!=j){
	   //                 a=1+dp[i-1][j-1];
	   //             }
	   //             else{
	   //                 b=max(dp[i-1][j],dp[i][j-1]);
	   //             }
	   //             dp[i][j]= max(a,b);
		  //      }
		  //  }
		  //  return lrs(str,m-1,n-1,dp);
		  //return dp[m-1][n-1];
		  
		  int n = str.size();
		    
		    vector<vector<int>> dp(n+1,vector<int>(n+1));
		    int i,j;
		    
		    for(i=n-1;i>=0;i--){
		        for(j=n-1;j>=0;j--){
		            if(str[i]==str[j] && i!=j)
		                dp[i][j] = 1+dp[i+1][j+1];
		            else
		                dp[i][j] = max(dp[i][j+1],dp[i+1][j]);
		        }
		    }
		    
		    return dp[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends