//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int>row={-1,0,1,0};
    vector<int>col={0,1,0,-1};
    void bfs(int n, int m, vector<vector<char>> &mat,int i,int j,vector<vector<int>>&vis){
        queue<pair<int,int>>q;
        q.push({i,j});
        mat[i][j]='Z';
        
        while(!q.empty()){
            int r=q.front().first;
            
            int c=q.front().second;
            q.pop();
            for(int k=0;k<=3;k++){
                int nrow=r+row[k];
                int ncol=c+col[k];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && mat[nrow][ncol]=='O' && vis[nrow][ncol]==0){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                    mat[nrow][ncol]='Z'; 
                }
            }
        }
        
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        // cout<<"hello"<<endl;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int j=0;
        for(int i=0;i<mat[0].size();i++){
            if(mat[j][i]=='O'){
                bfs(n,m,mat,j,i,vis);
            }
        }
        j=n-1;
        for(int i=0;i<mat[0].size();i++){
            if(mat[j][i]=='O'){
                   bfs(n,m,mat,j,i,vis);
            }
        }
        j=0;
        for(int i=0;i<mat.size();i++){
            if(mat[i][j]=='O'){
                bfs(n,m,mat,i,j,vis);
            }
        }
        j=m-1;
        for(int i=0;i<mat.size();i++){
            if(mat[i][j]=='O'){
                bfs(n,m,mat,i,j,vis);
            }
        }
        
        
        
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]=='O'){
                    mat[i][j]='X';
                }
                if(mat[i][j]=='Z'){
                    mat[i][j]='O';
                }
            }
        }
        return mat;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends