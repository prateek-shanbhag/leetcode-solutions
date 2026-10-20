class Solution {
public:
    void backtrack(int ct,int target,int k,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans,int i){
        if(i == nums.size()){
            if(target == 0 && ct == k){
                ans.push_back(temp);
            }
            return;
        }

        if(nums[i]<=target){
           temp.push_back(nums[i]);
           backtrack(ct+1,target-nums[i],k,nums,temp,ans,i+1);
           temp.pop_back();
        }

        backtrack(ct,target,k,nums,temp,ans,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        int count;
        vector<int> temp;
        vector<vector<int>> ans;
        backtrack(0,n,k,nums,temp,ans,0);
        return ans;
    }
};