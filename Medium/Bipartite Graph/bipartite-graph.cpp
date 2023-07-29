//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool bfs(vector<int>adj[],int i,int color[]){
        queue<int>q;
        color[i]=1;
        q.push(i);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x:adj[node]){
                if(color[x]==0){
                    if(color[node]==1){
                        color[x]=2;     
                    }
                    else{
                        color[x]=1;
                    }
                    q.push(x);
                }
                else{
                    if(color[x]==color[node]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V]={0};
	    for(int i=0;i<V;i++){
	        if(color[i]==0){
	            if(bfs(adj,i,color)==false){
	                return false;
	            }
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