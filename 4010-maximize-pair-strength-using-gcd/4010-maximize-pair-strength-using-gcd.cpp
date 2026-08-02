class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
             for(int j=i+1;j<nums.size();j++)
        {
              int g = gcd(nums[i],nums[j]);
              long long value =1LL*nums[i]*nums[j];
              value /= (1LL*g*g);
              ans=max(ans,value);
        }
    }
    return ans;
    }
};