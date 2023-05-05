//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool count(vector<int>arr, int sum,int i,vector<vector<int>>&dp){
        if(sum==0){
            return true;
        }
        if(sum<0){
            return false;
        }
        if(i>=arr.size()){
            return false;
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        
        return dp[i][sum]=count(arr,sum-arr[i],i+1,dp) || count(arr,sum,i+1,dp);
        
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(100002,-1));
        return count(arr,sum,0,dp);
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends