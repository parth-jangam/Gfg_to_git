//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    
	    vector<int>temp;
	    long long int max_sum=0;
	   // int max_len=0;
	    long long int sum=0;
	    vector<int>ans;
	    for(int i=0;i<n;i++){
	        if(a[i]>=0){
	            temp.push_back(a[i]);
	            sum+=a[i];
	        }
	        else{
	            
	            if(sum>max_sum){
	                 ans=temp;
	                 max_sum=sum;
	                 sum=0;
	               temp.clear();
	            }
	             else if(sum==max_sum && temp.size()>ans.size()){
	                   
	                    ans=temp;
	                    sum=0;
	                    temp.clear();
	            }
	            else{
	                temp.clear();
	                sum=0;
	            }
	       }
	        
	        
	    }
	    if(sum>max_sum){
	        ans=temp;
	    }
	    else if(sum==max_sum && temp.size()>ans.size()){
	        ans=temp;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends