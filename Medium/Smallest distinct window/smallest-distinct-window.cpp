//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_map<char,int>mappe;
        int i=0;
        while(i<str.size()){
            mappe[str[i]]++;
            i++;
        }
        int n=mappe.size();
        int count=0;
        mappe.clear();
        i=0;
        int j=0;
        int ans=INT_MAX;
        while(j<str.length()){
            if(mappe[str[j]]==0){
                count++;
                
                mappe[str[j]]++;
                j++;
            }
            else{
                mappe[str[j]]++;
                j++;
            }
            
            if(count==n){
                ans=min(ans,j-i);
                while(count==n){
                    if(mappe[str[i]]==1){
                        count--;
                        mappe[str[i]]--;
                        i++;
                    }
                    else{
                        mappe[str[i]]--;
                        i++;
                        ans=min(ans,j-i);
                    }
                    // i++;
                    
                }
                // ans=max(ans,j-i);
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends