class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int len =0;
        int mf=0;
        vector<int> hash(26,0);
        while(r<s.size())
        {
            hash[s[r]-'A']++;
            mf=max(mf,hash[s[r]-'A']);
            while((r-l+1-mf) > k)
            {
                 hash[s[l]-'A']--;
                 l++;
            }
            len = max( r-l+1 ,len);
            r++;
        }
        return len;
    }
};