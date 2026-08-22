class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> a,vector<int> b) {
                return b[1]>a[1];
        });
        int n = intervals.size();
        int max_count=1;
        int last_end = intervals[0][1];
        for(int i =1;i<n;i++){
            if(intervals[i][0]>=last_end){
                max_count++;
                last_end = intervals[i][1];
            }
        }
        return n-max_count;
    }
};