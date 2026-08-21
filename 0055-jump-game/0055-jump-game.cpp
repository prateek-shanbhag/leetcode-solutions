class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int max_len=0;
        for(int i=0;i<nums.size();i++){
            if(i>max_len)
            return false;
            else
            {
                max_len = max(max_len,i+nums[i]);
            }
            if(max_len>=nums.size())
            return true;
            
        }
        return true;
    }
};