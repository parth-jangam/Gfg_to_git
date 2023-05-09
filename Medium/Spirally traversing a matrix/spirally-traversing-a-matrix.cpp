//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    void traverse(vector<vector<int> > matrix, int r, int c,vector<int>&ans){
        int row_index=0;
        int column_index=0;
        while(row_index<r && column_index<c){
            for(int i=column_index;i<c;i++){
                ans.push_back(matrix[row_index][i]);
            }
            row_index++;
            for(int i=row_index;i<r;i++){
                ans.push_back(matrix[i][c-1]);
            }
            c--;
            if(row_index<r){
                for(int i=c-1;i>=column_index;i--){
                    ans.push_back(matrix[r-1][i]);
                }
                r--;
            }
            if(column_index<c){
                for(int i=r-1;i>=row_index;i--){
                    ans.push_back(matrix[i][column_index]);
                    
                }
                column_index++;
            }
        }
    }
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        traverse(matrix,r,c,ans);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends