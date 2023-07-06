//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

int lcs(string A,string B ,string C,int i,int j,int k,vector<vector<vector<int>>>&dp){
    if(i==0 || j==0 || k==0 ){
        return 0;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    // int a=0,b=0;
    if(A[i-1]==B[j-1] && B[j-1]==C[k-1]){
        return dp[i][j][k]= 1+lcs(A,B,C,i-1,j-1,k-1,dp);
    }
    else{
        return dp[i][j][k]= max(lcs(A,B,C,i-1,j,k,dp),max(lcs(A,B,C,i,j-1,k,dp),lcs(A,B,C,i,j,k-1,dp)));
    }
    // return dp[i][j][k]= max(a,b);
}
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
    vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
     lcs(A,B,C,n1,n2,n3,dp);
    return dp[n1][n2][n3];
    // for(int i=n1-1;i>=0;i--){
    //     for(int j=n2-1;j>=0;j--){
    //         int a=0,b=0;
    //         if(A[i]==B[j]){
    //             a=1+dp[i+1][j+1];
    //         }
    //         else{
    //             b= max(dp[i+1][j],dp[i][j+1]);
    //         }
    //         dp[i][j]= max(a,b);
    //     }
    // }
    // cout<<dp[0][0]<<endl;
    // string temp="";
    // int i=0,j=0;
    // while(i<n1 && j<n2){
    //     if(A[i]==B[j]){
    //         temp+=A[i];
    //         i++;
    //         j++;
    //     }
    //     else{
    //         if(dp[i+1][j]>dp[i][j+1]){
    //             i++;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    // }
    // cout<<temp<<endl;
    // // dp.clear();
    //  vector<vector<int>>dp1(n3+1,vector<int>(temp.length()+1,-1));
    // return lcs(C,temp,0,0,n3,temp.length(),dp1);
    
    
    // return dp[0][0];
}