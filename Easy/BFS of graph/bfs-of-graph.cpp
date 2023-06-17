//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<int> adj[],unordered_map<int,bool>&mappe,vector<int >&ans){
        queue<int>q;
        mappe[0]=true;
        q.push(0);
        ans.push_back(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x:adj[node]){
                if(!mappe[x]){
                    q.push(x);
                    ans.push_back(x);
                    mappe[x]=true;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        unordered_map<int,bool>mappe;
        // for(int i=0;i<V;i++){
            // if(!mappe[i]){
                bfs(adj,mappe,ans);
            // }
        // }
        return ans;
    }
};
     // Function to return Breadth First Traversal of given graph.
//     void bsf(int V,vector<int>adj[],unordered_map<int,bool>&mappe,vector<int>&ans){
//         queue<int >q;
//         mappe[0]=true;
//         q.push(0);
//         ans.push_back(0);
//         while(!q.empty()){
//             int a=q.front();
//             q.pop();
            
//             for(auto it:adj[a]){
//                 if(!mappe[it]){
//                     mappe[it]=true;
//                     q.push(it);
//                     ans.push_back(it);
//                 }
//             }
//         }
//     }
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         vector<int>ans;
//         unordered_map<int, bool>mappe;
//         // Code here
//         bsf(V,adj,mappe,ans);
//         return ans;
//     }
// };

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