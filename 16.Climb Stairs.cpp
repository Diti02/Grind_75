//Memoisation
//TC: O(N)
//SC: O(N)
int func(int n, vector<int>& dp){
        if(n==0 || n==1){
            return 1;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        int oneStep=climbStairs(n-1);
        int twoStep=climbStairs(n-2);

        return dp[n]=oneStep+twoStep;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return func(n,dp);
    }

//Tabulation
//TC:O(N)
//SC:O(1)
int climbStairs(int n) {
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int oneStep=dp[i-1];
            int twoStep=dp[i-2];
            dp[i]=oneStep+twoStep;
        }
        return dp[n];
    }