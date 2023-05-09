//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=INT_MIN;
	    int f_final=-1;
	    for(int i=0;i<n;i++){
	        int j=0;
	        while(j<m && arr[i][j]==0){
	            j++;
	        }
	       // ans=max(ans,m-j);
	        if(ans<m-j && m-j!=0){
	            
	            f_final=i;
	            ans=m-j;
	        }
	    }
	    return f_final;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends