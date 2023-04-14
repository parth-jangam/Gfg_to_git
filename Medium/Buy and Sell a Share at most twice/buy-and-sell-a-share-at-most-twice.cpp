//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
int profit(int i, int t,bool flag,vector<int>&price,vector<vector<vector<int>>>&dp){
    if(i==price.size() || t==2){
        return 0;
    }
    if(dp[i][t][flag]!=-1){
        return dp[i][t][flag];
    }
    
    if(flag==1){
        return dp[i][t][flag]= max(-price[i]+profit(i+1,t,0,price,dp),0+profit(i+1,t,1,price,dp));
    }
    return dp[i][t][flag]= max(price[i]+profit(i+1,t+1,1,price,dp),profit(i+1,t,0,price,dp));
}
int maxProfit(vector<int>&price){
    //Write your code here..
    int n= price.size();
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(2,-1)));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=1;j++){
            dp[i][2][j]=0;
        }
        
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            dp[n][i][j]=0;
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int t=1;t>=0;t--){
            for(int flag=0;flag<=1;flag++){
                if(flag==1){
                    dp[i][t][flag]= max(-price[i]+dp[i+1][t][0],0+dp[i+1][t][1]);
                }
                else{
                    dp[i][t][flag]= max(price[i]+dp[i+1][t+1][1],dp[i+1][t][0]);
                }
            }
        }
    }
    return dp[0][0][1];
    
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends