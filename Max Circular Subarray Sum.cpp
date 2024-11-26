int circularSubarraySum(vector<int> &arr) {

        // your code here
        int total = arr[0];
        int currmax = arr[0];
        int currmin = arr[0];
        int maxsum = arr[0];
        int minsum = arr[0];
        
        int n = arr.size();
        
        for(int i = 1;i<n;i++){
            currmax = max(currmax+arr[i],arr[i]);
            maxsum = max(currmax,maxsum);
            
            
            currmin = min(arr[i],currmin + arr[i]);
            minsum = min(minsum,currmin);
            
            total += arr[i];
        }
        
        int normalsum = maxsum;
        int circularsum = total - minsum;
        
        return max(normalsum,circularsum);
    }
