//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1=0;
        int sum2=0;
        int sum3=0;
        int i=0;
        while(i<S1.size()){
            sum1+=S1[i];
            i++;
        }
        i=0;
        while(i<S2.size()){
            sum2+=S2[i];
            i++;
        }
        i=0;
        while(i<S3.size()){
            sum3+=S3[i];
            i++;
        }
        int dig=min(sum1,min(sum2,sum3));
        i=0;
        int j=0;
        int k=0;
        while(i<N1 && j<N2 && k<N3){
            if(sum1==dig && sum2==dig && sum3==dig){
                break;
            }
            if(sum1>dig){
                sum1-=S1[i];
                i++;
            }
            if(sum2>dig){
                sum2-=S2[j];
                j++;
            }
            if(sum3>dig){
                sum3-=S3[k];
                k++;
            }
            dig=min(sum1,min(sum2,sum3));
        }
        return dig;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends