//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfs(vector<int>adj[], int i,int color[],unordered_map<int,bool>&mappe){
        for(auto x:adj[i]){
            if(!mappe[x]){
                mappe[x]=true;
                color[x]=!color[i];
                if(color[i] ==1){
                    color[x]=0;
                }
                else{
                    color[x]=1;
                }
                dfs(adj,x,color,mappe);
                
            }
            else{
                if(color[x]==color[i]){
                    return false;
                }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    unordered_map<int,bool>mappe;
	    int color[V];
	    for(int i=0;i<V;i++)color[i]=1;
	    
	    for(int i=0;i<V;i++){
	        
	        if(!dfs(adj,i,color,mappe)){
	            return false;
	        }
	    }
	    return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends