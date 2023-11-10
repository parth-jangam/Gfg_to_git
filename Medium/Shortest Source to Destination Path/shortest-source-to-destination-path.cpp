//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // int mini(int N,int M,vector<vector<int>>A, int X,int Y,int i,int j,vector<vector<int>>&vis){
    //     if(A[i][j]==0){
            
    //     }
    //     if(i==X && j==Y){
    //         return 1;
    //     }
        
    // }
    vector<int>row={-1,0,1,0};
    vector<int>col={0,1,0,-1};
    void bfs(vector<vector<int>> A, int X, int Y,int i,int j,vector<vector<int>>&mini,int N,int M){
        queue<pair<pair<int,int>,int>>q;
        q.push({{i,j},0});
        mini[i][j]=0;
        while(!q.empty()){
            int t=q.front().second;
            int r=q.front().first.first;
            int c=q.front().first.second;
            q.pop();
            for(int k=0;k<=3;k++){
                // if()
                int nrow=r+row[k];
                int ncol=c+col[k];
                if(nrow>=0 && ncol>=0 && nrow<N && ncol<M && A[nrow][ncol]==1 && mini[nrow][ncol]>t+1){
                    mini[nrow][ncol]=t+1;
                    q.push({{nrow,ncol},t+1});
                }
            }
        }
        
        
    }
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0]==0)return -1;
        vector<vector<int>>mini(N,vector<int>(M,INT_MAX));
        bfs(A,X,Y,0,0,mini,N,M);
        if(mini[X][Y]==INT_MAX)return -1;
        return mini[X][Y];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends