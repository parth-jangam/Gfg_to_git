//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<int> adj[],int i,vector<int>&ans,int vis[]){
        queue<int>q;
        vis[i]=1;
        // ans.push_back(i);
        q.push(i);
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto x:adj[node]){
                if(vis[x]==0){
                    q.push(x);
                    vis[x]=1;
                }
            }
            
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        vector<int>ans;
        bfs(adj,0,ans,vis);
        // for(int i=0;i<V;i++){
        //     if(!vis[i]){
                
        //     }
        // }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends