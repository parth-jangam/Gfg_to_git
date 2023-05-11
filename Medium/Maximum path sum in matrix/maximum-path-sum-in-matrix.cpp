//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxi(int N, vector<vector<int>> &Matrix,int i,int j,vector<vector<int>>&dp){
        
        if(i>=N || j>=N || i<0 || j<0){
            return 0;
        }
        if(i==N-1){
             return Matrix[i][j];
        }
    
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int a=0,b=0,c=0;
        a=Matrix[i][j]+maxi(N,Matrix,i+1,j,dp);
        if(j-1>=0){
            b=Matrix[i][j]+maxi(N,Matrix,i+1,j-1,dp);
        }
        if(j+1<N){
            c=Matrix[i][j]+maxi(N,Matrix,i+1,j+1,dp);
        }
         
        
    
        
        return dp[i][j]= max(max(c,b),a);
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        
        int ans=0;
        vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
        for(int i=0;i<N;i++){
            ans=max(ans,maxi(N,Matrix,0,i,dp));
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends