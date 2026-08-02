class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<(1<<nums.size());i++)
        {
            int n=0;
            vector<int> a;
            while(n<=nums.size())
            {
                if((i&(1<<n) ) !=0)
                {
                    a.push_back(nums[n]);
                }
                n++;
            }
            ans.push_back(a);
        }
        return ans;
    }
};