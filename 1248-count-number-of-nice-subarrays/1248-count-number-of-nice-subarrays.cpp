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
                 if(n[r]%2==1)
                 sum++;
                  while(sum>g)
                  {
                     if(n[l]%2==1)
                     sum--;
                     l++;
                  }
                ct+=r-l+1;
                r++;
             }
             return ct;
          }

    int numberOfSubarrays(vector<int>& nums, int k) {
          return find_count(nums ,k)-find_count(nums,k-1);
    }
};