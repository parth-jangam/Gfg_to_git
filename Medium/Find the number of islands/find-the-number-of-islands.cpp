//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>>& grid,int i,int j,int n,int m){
        grid[i][j]='2';
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            int r=x.first;
            int c=x.second;
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int row=r+i;
                    int col=c+j;
                    if(row>=0 && row<n && col>=0 && col<m && grid[row][col]=='1'){
                        q.push({row,col});
                        grid[row][col]='2';
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    bfs(grid,i,j,n,m);
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