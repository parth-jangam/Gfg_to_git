//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    
    bool knows(int x,int y,vector<vector<int> >& M){
        if(M[x][y]==1){
            return true;
        }
        return false;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        stack<int>s;
        for(int i=0;i<M.size();i++){
            s.push(i);
            
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(a,b,M)){
                s.push(b);
            }
            else{
                if(knows(b,a,M)){
                    
                    s.push(a);
                }
            }
        }
        if(s.empty()){
            return -1;
        }
        int ele=s.top();
        // s.pop();
        int c_zero=0;
        for(int i=0;i<M.size();i++){
            if(M[ele][i]==0){
                c_zero++;
            }
        }
        if(c_zero!=M.size()){
            return -1;
        }
        c_zero=0;
        for(int i=0;i<M.size();i++){
            if(M[i][ele]==1){
                c_zero++;      
            }
        }
        if(c_zero!=M.size()-1){
            return -1;
        }
        return ele;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends