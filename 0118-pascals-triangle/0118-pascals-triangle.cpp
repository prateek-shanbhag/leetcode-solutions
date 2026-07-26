class Solution {
public:
        vector<int> rowgenerator(int n){
            vector<int> row;
            int value=1;
            row.push_back(value);
            for(int col = 1 ; col < n ; col++)
            {
                    value *= (n-col);
                    value /= col;
                    row.push_back(value);
            }
            return row;
        }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1 ; i<= numRows ; i++)
        {
            ans.push_back(rowgenerator(i));
        }
        return ans;
    }
};