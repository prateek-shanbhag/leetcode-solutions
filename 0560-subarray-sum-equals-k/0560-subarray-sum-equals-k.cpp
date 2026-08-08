class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]++;
        int count=0;
        int pre_sum=0;
        for(int i =0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            if(mp.find(pre_sum - k)!=mp.end())
            {
                count += mp[pre_sum-k];
            }
            mp[pre_sum]++;
        }
        return count;        
    }
};