class Solution {
public:
    int fun(int n, vector<int>& dp){
        if(dp[n] == -1)
        return dp[n] = fun(n-1,dp) + fun(n-2,dp);
        else
        return dp[n];
    }
    int climbStairs(int n) {
          vector<int> dp(n+1,-1);
          dp[0] = dp[1] = 1;
          return fun(n,dp);
    }
};