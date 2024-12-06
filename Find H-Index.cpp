class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin(),citations.end());
        
        int n = citations.size();
        
        int ans = 0;
        
        int mini = citations[n-1];
        for(int i = n-1;i>=0;i--){
            
            mini = min(mini,citations[i]);
            
            if(mini>=(n-i)){
                ans = n - i;
            }else{
                break;
            }
        }
        
        return ans;
    }
};
