class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int a = abs(source[0] - target[0]);
        int b = abs(source[1] - target[1]);
        if(a==0 && b==0)
        return 0;
        else if(a==0 || b==0 || a==b)
        return 1;
        else
        return 2;
    }
};