//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>check;
        // if(x[0]=='}' || x[0]==')' || x[0]==']'){
        //     return false;
        // }
        int i=0;
        for(int i=0;i<x.length();i++){
            if(x[i]=='(' || x[i]=='{' || x[i]=='['){
                check.push((x[i]));
                    
                
            }
            else{
                if(!check.empty()){
                    if((x[i]==')' && check.top()=='(') ||( x[i]=='}' && check.top()=='{') || (x[i]==']' && check.top()=='[')){
                        check.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(!check.empty()){
            return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends