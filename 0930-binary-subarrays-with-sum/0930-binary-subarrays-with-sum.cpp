class Solution {
public:
    int find_count(vector<int>& n, int g)
          {
             int l=0;
             int r=0;
             int sum=0;
             int ct=0;
             if(g<0)
             return 0;
             while(r<n.size())
             {
                 sum+=n[r];
                  while(sum>g)
                  {
                     sum -= n[l];
                     l++;
                  }
                ct+=r-l+1;
                r++;
             }
             return ct;
          }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
          return find_count(nums ,goal)-find_count(nums,goal-1);
    }
};