//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        
        stack<char>s1;
        stack<int>s2;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                s1.push(S[i]);
                s2.push(i);
            }
            else{
                if(!s1.empty()){
                    if(S[i]==')' && s1.top()=='('){
                        s1.pop();
                        s2.pop();
                    }
                    else{
                        s1.push(S[i]);
                        s2.push(i);
                    }
                }
                else{
                    s1.push(S[i]);
                    s2.push(i);
                }
            }
        }
        int maxi=0;
        int ind=S.length();
        while(!s2.empty()){
            maxi=max(maxi,ind-s2.top()-1);
            ind=s2.top();
            s2.pop();
        }
        maxi=max(maxi,ind-0);
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends