class Solution {
public:
    int strStr(string haystack, string needle) {
  int u=needle.size();
  int m=haystack.size();
  int ans,f=0;
        string s2;
        for(int i=0;i<(m-u+1);i++)
        {
            s2=haystack.substr(i,u);
            if(s2==needle)
            {
                f=1;
                ans=i;
                break;
            }    
        }
        if(f==0)
            return -1;
        else
            return ans;
        
    }
};
