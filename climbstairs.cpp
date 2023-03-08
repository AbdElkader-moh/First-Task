int ans(int n)
        {
            if(n==1)
            return 1;
            else if(n==2)
            {
                return 2;
            }
            else if(n==3)
            return 3;
            else if(n==4)
            return 5;
            else if(n==5)
            return 8;
            else if(n==6)
            return 13;
            else
            return ans(n-1)+ans(n-2);
            
        }
class Solution {
public:

    int climbStairs(int n) {
        int ans1=ans(n);
        return ans1;
    }
};
