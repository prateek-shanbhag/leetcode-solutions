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
           int l = 1;
           int r = 1;
          for(int i = 2 ; i<=n ; i++)
          {
               int next = l+r;
               l = r;
               r = next;
          }
          return r;
    }
};