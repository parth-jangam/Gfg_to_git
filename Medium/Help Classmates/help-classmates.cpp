//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    void insert(stack<int>&s,vector<int>&ans,vector<int> &arr, int n,int i){
        if(s.empty()){
            ans.push_back(-1);
            return;
        }
        cout<<s.top()<<endl;
        if(s.top()<arr[i]){
            ans.insert(ans.begin(),s.top());
            return ;
        }
        s.pop();
        insert(s,ans,arr,n,i);
    }
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int>s;
        vector<int>ans(n);
        
        
        
        // for(int i=n-1;i>=0;i--){
        //     insert(s,ans,arr,n,i);
        //     s.push(arr[i]);
        // }
        // return ans;
        
        
        
        
        
        
        
        for(int i=n-1;i>=0;i--){
            
                while(!s.empty() && s.top()>=arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    // ans.insert(ans.begin(),-1);
                    ans[i]=-1;
                    s.push(arr[i]);
                }
                else{
                    // ans.insert(ans.begin(),s.top());
                    ans[i]=s.top();
                    s.push(arr[i]);
                }
            
        }
        return ans;
    } 
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends