int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int min = prices[0];
        int profit = 0;
        
        for(int i = 0;i<n;i++){
            
            if(min>prices[i]){
                min = prices[i];
            }
            
            int x = prices[i]-min;
            
            if(x>profit){
                profit = x;
            }
        }
        
        return profit;
    }
