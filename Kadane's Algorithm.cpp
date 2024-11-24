int maxSubarraySum(vector<int> &arr) {
        // code here...
        int ending = arr[0];
        int ans = arr[0];
        
        for(int i = 1;i<arr.size();i++){
            ending = max(ending+arr[i],arr[i]);
            
            ans = max(ans,ending);
        }
        
        return ans;
    }
