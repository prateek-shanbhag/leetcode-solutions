class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256,-1);
        int l =0;
        int r =0;
        int len = 0;
        while(r<s.size())
        {
            if(last[s[r]]!=-1)
            {
                if(last[s[r]]+1>l)
                l=last[s[r]]+1;
            }
            last[s[r]]=r;
            len = max(len , r-l+1);
            r++;
        }
        return len;
    }
};