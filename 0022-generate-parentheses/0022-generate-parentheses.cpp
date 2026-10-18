class Solution {
public:
    void backtraking(int open,int close,string& s,int n,vector<string>& ans){
        if(s.size() == 2*n){
            ans.push_back(s);
            return;
        }

        if(open<n){
            s.push_back('(');
            backtraking(open+1,close,s,n,ans);
            s.pop_back();
        }

        if(close<open){
             s.push_back(')');
            backtraking(open,close+1,s,n,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> ans;
        backtraking(0,0,s,n,ans);
        return ans;
    }
};