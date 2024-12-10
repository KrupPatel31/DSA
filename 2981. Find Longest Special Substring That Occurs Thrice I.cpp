class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> map;

        int n = s.size();

        for(int i = 0;i<n;i++){
            string x;
            x.push_back(s[i]);
            map[x]++;
            for(int j = i+1;j<n;j++){
                if(x[0] == s[j]){
                    x.push_back(s[j]);
                    map[x]++;
                }else{
                    break;
                }
            }
        }

        int ans = -1;
        for(auto i : map){
            if(i.second >= 3){
                int x = (i.first).size();
                if(x>ans){
                    ans = x;
                }
            }
        }

        return ans;
    }
};
