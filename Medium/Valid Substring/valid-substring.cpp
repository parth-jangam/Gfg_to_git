//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        // return 0;
        int i=0;
        stack<char>st;
        stack<int>p;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
                p.push(i);
            }
            else{
                if(!st.empty()){
                    if(s[i]==')' && st.top()=='('){
                        // count+=2;
                        st.pop();
                        p.pop();
                    }
                    else{
                        st.push(s[i]);
                        p.push(i);
                        
                    }
                }
                else{
                    st.push(s[i]);
                    p.push(i);
                }
            }
        }
        // cout<<p.size()<<endl;
        int maxi=0;
        int count=0;
        if(p.empty()){
            return s.length();
        }
        // maxi=s.length()-st.top();
        // st.push(s.length()+1);
        int n=s.length();
        while(!p.empty()){
            int cur=p.top();
            // cout<<cur<<endl;
            p.pop();
            maxi=max(maxi,(n-cur-1));
            n=cur;
        }
        maxi=max(maxi,(n-0));
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends