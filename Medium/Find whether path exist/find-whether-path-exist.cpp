//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool have_path(vector<vector<int>>& grid,vector<vector<int>>&vis,int i,int j,int n,int m){
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=1;
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            if(row+1<n && vis[row+1][col]==0){
                vis[row+1][col]==1;
                if(grid[row+1][col]==3){
                    q.push({row+1,col});
                }
                else{
                    if(grid[row+1][col]==2){
                        return true;
                    }
                }
            }
            if(row-1>=0 && vis[row-1][col]==0){
                vis[row-1][col]==1;
                if(grid[row-1][col]==3){
                    q.push({row-1,col});
                }
                else{
                    if(grid[row-1][col]==2){
                        return true;
                    }
                }
            }
            if(col+1<m && vis[row][col+1]==0){
                vis[row][col+1]==1;
                if(grid[row][col+1]==3){
                    q.push({row,col+1});
                }
                else{
                    if(grid[row][col+1]==2){
                        return true;
                    }
                }
            }
            if(col-1>=0 && vis[row][col-1]==0){
                vis[row][col-1]==0;
                if(grid[row][col-1]==3){
                    q.push({row,col-1});
                }
                else{
                    if(grid[row][col-1]==2){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(have_path(grid,vis,i,j,n,m)){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends