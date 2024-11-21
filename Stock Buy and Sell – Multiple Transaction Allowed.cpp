//1st Method
int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int lmin = prices[0];
        int lmax = prices[0];
        int prof = 0;
        
        int i = 0;
        while(i<n-1){
            while(prices[i] >= prices[i+1] && i<n-1){
                i++;
            }
            lmin = prices[i];
            
            while(prices[i] <= prices[i+1] && i<n-1){
                i++;
            }
            lmax = prices[i];
            
            prof += (lmax-lmin);
            i++;
        }
        return prof;


//2nd Method
int maximumProfit(vector<int> &prices) {
        // code here
        int lmin = prices[0];
        int lmax = prices[0];
        int prof = 0;
        
        for(int i = 1;i<prices.size();i++){
            if(prices[i] >= lmax){
                lmax = prices[i];
            }else{
                prof += lmax-lmin;
                lmin = prices[i];
                lmax = prices[i];
            }
        }
        
        prof += lmax-lmin;
        return prof;
    }
