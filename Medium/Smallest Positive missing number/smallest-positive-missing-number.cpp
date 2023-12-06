//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        // cout<<arr[42]<<endl;
        int i=0;
        while(arr[i]<0){
            i++;
        }
        // cout<<i<<endl;
        int j;
        if(arr[i]==0){
            j=0;
        }
        else{
            j=1;
        }
        while(i<=n){
            if(arr[i]==arr[i-1] && i!=0){
                i=i+1;
                continue;
            }
            if(arr[i]!=j){
                return j;
            }
            i++;
            j++;
        }
        return i+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends