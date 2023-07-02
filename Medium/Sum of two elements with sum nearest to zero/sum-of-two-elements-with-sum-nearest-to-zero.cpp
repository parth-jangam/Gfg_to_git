//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr,arr+n);
            int i=0;
            int j=n-1;
            int maxi=INT_MAX;
            while(i<j && i!=j){
                
                if(abs(0-(arr[j]+arr[i]))<=abs(maxi)){
                    // if(maxi<arr[j]+arr[i]){
                    if(abs(0-(arr[j]+arr[i]))==abs(maxi)){
                        maxi=max(arr[j]+arr[i],maxi);
                    }
                    else{
                        maxi=arr[j]+arr[i];    
                    }
                    // cout<<0-(arr[j]+arr[i])<<endl;
                    
                    // }
                }
                if(arr[i]+arr[j]==0){
                    return 0;
                    
                }
                else{
                    if(arr[i]+arr[j]<0){
                        i++;
                    }
                    else{
                        j--;
                    }
                }
            }
            return maxi;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends