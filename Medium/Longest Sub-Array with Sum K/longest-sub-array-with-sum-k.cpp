//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>mappe;
        int sum=0;
        // mappe[sum]=1;
        int max_count=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                max_count=max(max_count,i+1);
                // mappe[sum]=i;
            }
            else {
                if(mappe.find(sum-K)!=mappe.end()){
                    max_count=max(max_count,i-mappe[sum-K]);
                }
                
            }
            
            if(mappe.find(sum)==mappe.end()){
                mappe[sum]=i;
            }
            
        }
        return max_count; 
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends