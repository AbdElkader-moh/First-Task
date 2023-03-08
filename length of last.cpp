#include <cstring>
class Solution {
public:
    int lengthOfLastWord(string s) {
        int u=s.size()-1,ans=0,f=0;
        while (s[u]==' ')
        {
        u--;
        }
        cout<<s.size();
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==' ')
           {
           f=1;
           break;
           }
       }
       if(f==0)
       return u+1;
       else{
           cout<<1;
        while (s[u]!=' '&&u!=-1)
        {
          ans++;
          u--;
          if(u==-1)
          break;

        }
        return ans;
       }
    }
};
