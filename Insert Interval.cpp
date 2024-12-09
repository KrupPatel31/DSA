class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        intervals.push_back(newInterval);
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        
        int n = intervals.size();
        ans.push_back(intervals[0]);
        
        for(int i = 1;i<n;i++){
            if(intervals[i][0] <= ans.back()[1]){
                int m = max(intervals[i][1] , ans.back()[1]);
                
                ans.back()[1] = m;
            }else{
                ans.push_back(intervals[i]);
            }
        }
        
        return ans;
    }
};
