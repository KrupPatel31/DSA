vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n = arr.size();
        unordered_map<int,int> map;
        
        for(int i = 0;i<n;i++){
            map[arr[i]]++;
        }
        
        vector<int> ans;
        
        for(auto i : map){
            if(i.second > n/3){
            ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
