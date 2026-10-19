class Solution {
public:
    void backtrack(int target,vector<int>& c,vector<vector<int>>& ans,vector<int> temp,int i,int n){
        if(i == n){
            if(target == 0)
            ans.push_back(temp);
            return;
        }

        if(target-c[i]>=0){
            target -= c[i];
            temp.push_back(c[i]);
            backtrack(target,c,ans,temp,i,n);
            target += c[i];
            temp.pop_back();
        }
 
        backtrack(target,c,ans,temp,i+1,n);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        backtrack(target,candidates,ans,temp,0,n);
        return ans;
    }
};