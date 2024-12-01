int maxOnes(vector<int>& arr, int k) {
        // code here
        int ans = 0;
        
        int n = arr.size();
        
        int start = 0;
        int end = 0;
        
        int cnt = 0;
        
        while(end<n){
            if(arr[end] == 0){
                cnt++;
            }
            
            while(cnt>k){
                if(arr[start] == 0){
                    cnt--;
                }
                start++;
            }
            
            ans = max(ans,end-start+1);
            
            end++;
        }
        
        return ans;
    }
