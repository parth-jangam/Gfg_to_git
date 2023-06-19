//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int i, vector<int> adj[]){
        queue<int>q;
        unordered_map<int,bool>vis;
        unordered_map<int,int>parent;
        q.push(i);
        vis[i]=true;
        parent[i]=-1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            int par=parent[node];
            for(auto x:adj[node]){
                if(vis[x] && par!=x){
                    return true;
                }
                else{
                    if(!vis[x] && par!=x){
                        q.push(x);
                        vis[x]=true;
                        parent[x]=node;
                    }
                }
            }
            
        }
        return false;
        
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        
        for(int i=0;i<V;i++){
            if(bfs(i,adj)){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends