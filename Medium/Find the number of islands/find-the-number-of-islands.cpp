//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>>&grid,int row,int col ,vector<vector<int>>&mappe){
        queue<pair<int,int>>q;
        q.push({row,col});
        mappe[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            int r=q.front().first;
            int c= q.front().second;
            q.pop();
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nrow=r+i;
                    int ncol=c+j;
                    if(nrow<n && nrow>=0 &&ncol<m && ncol>=0 && mappe[nrow][ncol]==0 &&grid[nrow][ncol]=='1'){
                        mappe[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }   
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        
        // int count=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<int>adj[n];
        int count=0;
        vector<vector<int>>mappe(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && mappe[i][j]==0){
                    count++;
                    bfs(grid,i,j,mappe);
                }
            }
        }
        return count;
    }
    
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends