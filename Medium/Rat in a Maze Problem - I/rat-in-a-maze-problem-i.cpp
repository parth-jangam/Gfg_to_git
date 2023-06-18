//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void rat_in_maze(vector<vector<int>> &m, int n,vector<string>&ans,int row,int col,string &temp){
        if(row==n-1 && col==n-1){
            ans.push_back(temp);
            
            return;    
        }
        if(row>=n || col>=n || row<0 || col<0){
            return ;
        }
        if( row>0 && col>=0 && col<n && row<n && m[row-1][col]!=0){
            temp.push_back('U');
            m[row][col]=0;
            rat_in_maze(m,n,ans,row-1,col,temp);
            temp.pop_back();
            m[row][col]=1;
            
        }
        if(row<n-1 && col>=0 && col<n && row>=0 && m[row+1][col]!=0 ){
            temp.push_back('D');
            m[row][col]=0;
            rat_in_maze(m,n,ans,row+1,col,temp);
            temp.pop_back();
            m[row][col]=1;
        }
        if(col>0 && row>=0 && row<n && col<n && m[row][col-1]!=0){
            temp.push_back('L');
            m[row][col]=0;
            rat_in_maze(m,n,ans,row,col-1,temp);
            temp.pop_back();
            m[row][col]=1;
        }
        if(col<n-1 && row>=0 && row<n && col>=0 && m[row][col+1]!=0 ){
            temp.push_back('R');
            m[row][col]=0;
            rat_in_maze(m,n,ans,row,col+1,temp);
            temp.pop_back();
            m[row][col]=1;
        }
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string>ans;
        if(m[0][0]==0 || m[n-1][n-1]==0){
            return ans;
        }
        string temp="";
        rat_in_maze(m,n,ans,0,0,temp);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends