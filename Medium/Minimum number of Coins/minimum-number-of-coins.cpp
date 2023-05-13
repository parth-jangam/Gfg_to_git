//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void mini(vector<int>amount,int N,vector<int>&ans,int i){
        if(N==0 || N<0){
            return ;
        }
        if(N>=amount[i]){
            ans.push_back(amount[i]);
            mini(amount,N-amount[i],ans,i);
        }
        else{
            mini(amount,N,ans,i-1);
        }
        
    }
    vector<int> minPartition(int N)
    {
        // code here
        vector<int>amount;
        amount.push_back(1);
        amount.push_back(2);
        amount.push_back(5);
        amount.push_back(10);
        amount.push_back(20);
        amount.push_back(50);
        amount.push_back(100);
        amount.push_back(200);
        amount.push_back(500);
        amount.push_back(2000);
        vector<int>ans;
        int i=amount.size()-1;
        mini(amount,N,ans,i);
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
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends