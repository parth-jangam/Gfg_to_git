//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        int i=0;
        while(i<n){
            if(arr[i]==0){
                arr[i]=-1;
            }
            i++;
        }
        unordered_map<int,int>mappe;
        int count=0;
        i=0;
        int sum=0;
        while(i<n){
            sum+=arr[i];
            if(sum==0){
                count++;
                if(mappe[sum]!=0){
                    count+=mappe[sum];
                }
                mappe[sum]++;
            }
            else{
                if(mappe[sum]!=0){
                    count+=mappe[sum];
                }
                mappe[sum]++;
            }
            i++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends