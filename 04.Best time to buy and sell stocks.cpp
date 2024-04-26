//TC: O(N)
    //SC: O(1)
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxp=max(maxp,prices[i]-mini);
        }
        return maxp;
    }
