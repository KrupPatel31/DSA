class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int,int>> v;

        int n = nums.size();

        for(int i = 0;i<n;i++){
            auto p = make_pair(nums[i],i);
            v.push_back(p);
        }

        long long score = 0;

        sort(v.begin(),v.end());

        unordered_map<int,bool> m;

        int i = 0;
        while(m.size() < n){
            if(m[v[i].second] == true){
                i++;
                continue;
            }else{
                score += v[i].first;
                if(v[i].second > 0 && v[i].second < n-1){
                    m[v[i].second + 1] = true;
                    m[v[i].second - 1] = true;
                }
                else if(v[i].second == 0){
                    m[v[i].second + 1] = true;
                }else if(v[i].second == n-1){
                    m[v[i].second - 1] = true;
                }

                i++;
            }
        }

        return score;
    }
};
