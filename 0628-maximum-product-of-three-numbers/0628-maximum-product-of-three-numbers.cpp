class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        long long ans=1;
        long long ans2=1;
        ans*=nums[n];
        ans*=nums[n-1];
        ans*=nums[n-2];
        ans2*=nums[0];
        ans2*=nums[1];
        ans2*=nums[n];
        return max((int)ans,(int)ans2);

    }
};