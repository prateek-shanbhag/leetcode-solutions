class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i : nums)
        {
            if(st.find(i)!=st.end())
            {
                return true;
            }
            else
            {
                st.insert(i);
            }
        }
        return false;
    }
};
//remeber using unordered set is always better since in many cases the method in
//this has bigO(1) tc whereas in set it is bigO(log(n))
//but profit of set is it is stored in sorted method as well
