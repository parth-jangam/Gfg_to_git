//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool cycle(vector<int> adj[],unordered_map<int,bool>&mappe,int i){
        mappe[i]=true;
        queue<pair<int ,int>>q;
        q.push({i,-1});
        
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto x:adj[node]){
                if(!mappe[x]){
                    q.push({x,node});
                        mappe[x]=1;
                }
                else{
                    if(mappe[x]==1  && x!=parent){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // bool check=false;
        unordered_map<int,bool>mappe;
        for(int i=0;i<V;i++){
            if(mappe[i]!=1){
                if(cycle(adj, mappe,i)){
                    return true;
                }
                
            }
        }
        return false;
        
    }
};
// class Solution {
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool bfs(int i,vector<int>adj[],unordered_map<int,int>&mappe){
//         queue<pair<int,int>>q;
//         q.push({i,-1});
//         mappe[i]=1;
//         while(!q.empty()){
//             int node=q.front().first;
//             int parent=q.front().second;
//             q.pop();
//             for(auto x:adj[node]){
//                 if(!mappe[x]){
//                     q.push({x,node});
//                     mappe[x]=1;
//                 }
//                 else{
//                     if(mappe[x]==1 && x!=parent){
//                         return true;
//                     }
//                 }
//             }
//         }
//         return false;
//     }
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
        
//         unordered_map<int,int>mappe;
//         // for(int i=0;i<V;i++)vis[V]=-1;
//         for(int i=0;i<V;i++){
//             if(mappe[i]!=1){
//                 if(bfs(i,adj,mappe)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

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