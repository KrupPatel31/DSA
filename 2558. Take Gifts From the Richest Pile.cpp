class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;

        priority_queue<int> pq;

        int n = gifts.size();

        for(int i = 0;i<n;i++){
            pq.push(gifts[i]);
        }

        for(int i = 1;i<=k;i++){
            int x = sqrt(pq.top());
            pq.pop();
            pq.push(x);
        }

        for(int i = 0;i<n;i++){
            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};
