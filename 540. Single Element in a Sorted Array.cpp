class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }

        int max = n-1;
        int min = 0;

        while(min<=max){
            int mid = (max+min)/2;
            int val = nums[mid];

            if(max == min){
                return val;
            }

            if(mid%2 == 0){
                if(nums[mid-1] == val){
                     max = mid-2;
                }else if(nums[mid+1] == val){
                    min  = mid + 2;
                }else{
                    break;
                }
            }
            else if(mid%2 == 1 ){
                if(nums[mid-1] == val){
                    min = mid+1;
                }else if(nums[mid+1] == val){
                    max = mid-1;
                }else{
                    break;
                }
            }else{
                break;
            }
        }
        int x = (max+min)/2;
        return nums[x];
    }
};
