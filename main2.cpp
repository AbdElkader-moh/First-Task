class Solution {
public:
    bool isPalindrome(int x) {
        int ans=0,remainder,ans2=x;
        if(0>x)
        return false;
        while(x!=0)
        {
          remainder=x%10;
          ans=ans*10+remainder;
          x=x/10;
        }
        if(ans2==ans)
        return true;
        else 
        return false;
        
    }
};
