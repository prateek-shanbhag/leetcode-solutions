class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n ;  ;i++)
        {
            int product=1;
            int m=i;
            while(m)
            {
                int q=m%10;
                product*=q;
                m/=10;
            }
            if(product%t==0)
            return i;
        }
    }
};