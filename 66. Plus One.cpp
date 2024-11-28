vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        vector<int> ans;

        int x = digits[n-1] + 1;
        int carry = 0;
        if(x == 10){
            ans.push_back(0);
            carry = 1;
        }else{
            ans.push_back(x);
        }

        for(int i = n-2;i>=0;i--){
            x = digits[i] + carry;

            if(x == 10){
                ans.push_back(0);
                carry = 1;
            }else{
                ans.push_back(x);
                carry = 0;
            }
        }
        
        if(carry == 1){
            ans.push_back(carry);
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
