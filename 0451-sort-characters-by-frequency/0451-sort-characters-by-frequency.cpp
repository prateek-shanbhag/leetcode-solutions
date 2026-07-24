class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int> mp;
        for(char i : s)
        {
             mp[i]++;
        }
        int n=s.size();
        vector<vector<char>> a(n+1);
        for(auto it : mp)
        {
            a[it.second].push_back(it.first);
        }
        for(int i= n ;i>0;i--)
        {
            for(char c : a[i])
            {
                ans.append(i,c);
            }
        }
        return ans;
    }
};