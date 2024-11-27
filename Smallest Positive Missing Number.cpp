int missingNumber(vector<int> &arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        
        int n = arr.size();
        
        if(arr[n-1] <= 0){
            return 1;
        }
        
        vector<int> a(arr[n-1],0);
        
        for(int i = 0;i<n;i++){
            if(arr[i] > 0){
                a[arr[i]-1]++;
            }
        }
        
        int ans = arr[n-1]+1;
        
        for(int i = 0;i<a.size();i++){
            if(a[i] == 0){
                ans = i+1;
                break;
            }
        }
        
        return ans;
    }
