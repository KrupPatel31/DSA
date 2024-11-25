int search(vector<int>& nums, int target) {
        auto x = nums.begin();
        auto y = nums.end();

        auto it = find(nums.begin(),nums.end(),(target));

        if(it == nums.end()){
            return -1;
        }else{
            return (it - nums.begin());
        }
    }
