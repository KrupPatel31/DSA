class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = nums.size();

        int one = 0;
        int zero = 0;

        for(int i = 0;i<l;i++){
            if(nums[i] == 0){
                zero++;
            }else if(nums[i] == 1){
                one++;
            }
        }

        for(int i = 0;i<l;i++){
            if(zero != 0){
                nums[i] = 0;
                zero--;
            }else if(one != 0){
                nums[i] = 1;
                one--;
            }else{
                nums[i] = 2;
            }
        }
    }
};
