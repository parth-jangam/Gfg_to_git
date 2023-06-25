//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>>s;
       int i=0;
       int count=1;
       vector<int>ans;
       while(i<n){
           if(s.empty()){
               s.push({price[i],1});
               ans.push_back(1);
           }
           else{
               while(!s.empty() && price[i]>=s.top().first){
                   count+=s.top().second;
                   s.pop();
                   
               }
               s.push({price[i],count});
               ans.push_back(count);
               count=1;
            }
            i++;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends