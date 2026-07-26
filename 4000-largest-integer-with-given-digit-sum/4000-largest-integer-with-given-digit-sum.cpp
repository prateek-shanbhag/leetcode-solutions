class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>n*9)
        return -1;
        else
        {
            int cnt=0;
            int i=9;
            long long value=0;
            while(cnt<n && s>0)
            {
                if(s-i >= 0)
                {
                  value = value*10 + i;
                  s-=i;
                  cnt++;
                }
                else
                {
                    i--;
                }
            }
            n=n-cnt;
            while(n--)
            {
                value=value*10;
            }
            return (int)value;
        }
    }
};