//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int maxi=0;
        while(j<S.length()){
            mp[S[j]]++;
            if(mp[S[j]]>=2){
                while(S[i]!=S[j]){
                    mp[S[i]]--;
                    i++;
                }
                i++;
                mp[S[j]]--;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends