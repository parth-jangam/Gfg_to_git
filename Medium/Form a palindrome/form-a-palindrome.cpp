//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int lca(string str,string s1,int i,int j,vector<vector<int>>&dp){
        if(i==str.length() || j==s1.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take=0;
        int not_take=0;
        if(str[i]==s1[j]){
            take=1+lca(str,s1,i+1,j+1,dp);
        }
        else{
            not_take=max(lca(str,s1,i+1,j,dp),lca(str,s1,i,j+1,dp));
        }
        return dp[i][j]= max(take,not_take);
    }
    int countMin(string str){
    //complete the function here
        string s1=str;
        reverse(str.begin(),str.end());
        int n=str.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int ans=lca(str,s1,0,0,dp);
        return str.length()-ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends