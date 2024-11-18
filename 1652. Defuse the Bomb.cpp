class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int l = code.size();
        vector<int> ans(l,0);

        if(k == 0){
            for(int i = 0;i<l;i++){
                ans[i] = 0;
            }
        }else if(k>0){
            for(int i = 0;i<l;i++){
                int x = k;
                int j = i+1;
                while(x>0){
                    if(j==l){
                        j = 0;
                    }
                    ans[i] += code[j];
                    j++;
                    x--;
                }
            }
        }else{
            for(int i = 0;i<l;i++){
                int x = k;
                int j = i-1;
                while(x<0){
                    if(j == -1){
                        j = l-1;
                    }
                    ans[i] += code[j];
                    j--;
                    x++;
                }
            }
        }

        return ans;
    }
};
