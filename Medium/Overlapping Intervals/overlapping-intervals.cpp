//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         int i=0;
         sort(intervals.begin(),intervals.end());
         while(i<intervals.size()-1){
             vector<int>temp;
             if(intervals[i][1]>=intervals[i+1][0]){
                 temp.push_back(min(intervals[i][0],intervals[i+1][0]));
                 temp.push_back(max(intervals[i][1],intervals[i+1][1]));
                 intervals.erase(intervals.begin()+(i+1));
                 intervals.erase(intervals.begin()+(i));
                 intervals.insert(intervals.begin()+i,temp);
                 
             }
             else{
                 i++;
             }
         }
         return intervals;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends