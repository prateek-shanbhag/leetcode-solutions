class Solution {
public:
    // int fun(int n, vector<int>& dp){
    //     if(dp[n] == -1)
    //     return dp[n] = fun(n-1,dp) + fun(n-2,dp);
    //     else z
    //     return dp[n];
    // }
    int climbStairs(int n) {
          vector<int> dp(n+1);
          dp[0] = dp[1] = 1;
          for(int i = 2 ; i<=n ; i++)
          {
             dp[i] = dp[i-1]+dp[i-2];
          }
          return dp[n];
    }
};