class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size()-1;
        while(high>low)
        {
            int mid = low + (high-low)/2;
            int ct=0;
            for(int i : nums)
            {
                if(i<=mid)
                ct++;
            }
            if(ct<=mid)
            {
                low = mid+1;
            }
            else
            {
                high=mid;
            }

        }
        return low;
    }
};