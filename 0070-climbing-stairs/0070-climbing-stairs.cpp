class Solution {
public:
    int climbStairs(int n) {
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