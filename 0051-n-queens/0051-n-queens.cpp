class Solution {
public:
    void backtrack( vector<vector<string>>& ans,vector<string>& temp,int col,int n,
    vector<int>& side,vector<int>& upper_diagonal,vector<int>& lower_diagonal){
        if(col == n){
            ans.push_back(temp);
            return;
        }

        for(int row = 0;row<n;row++){
            if(side[row]==0 && lower_diagonal[row+col]==0 && upper_diagonal[n-1+col-row]==0){
                temp[row][col] = 'Q';
                side[row] = 1;
                lower_diagonal[row+col] = 1;
                upper_diagonal[n-1+col -row] = 1;
                backtrack(ans,temp,col+1,n,side,upper_diagonal,lower_diagonal);
                temp[row][col] = '.';
                side[row] = 0;
                lower_diagonal[row+col] = 0;
                upper_diagonal[n-1+col -row] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> ans;
         vector<string> temp(n);
         vector<int> side(n,0);
         vector<int> upper_diagonal(2*n-1,0);
          vector<int> lower_diagonal(2*n-1,0);
         string s(n,'.');
         for(int i=0;i<n;i++){
            temp[i]=s;
         }
         backtrack(ans,temp,0,n,side,upper_diagonal,lower_diagonal);
         return ans;
    }
};