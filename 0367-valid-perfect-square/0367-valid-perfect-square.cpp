class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1;
        int high=num;
        int ans=0;
        if(num==1)
        return true;
        while(high>=low)
        {
            int mid = low +(high-low)/2;
            if(mid<=num/mid)
            {
               ans = mid;
               low = mid+1;
            }
            else
            high = mid-1;
        }
        
        if(num/ans == ans && num%ans==0)
        return true;
        else
        return false;
    }
};