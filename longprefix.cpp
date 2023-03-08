#include<cmath>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min1=300,f1=1,ans=0;
        for(int i=0;i<strs.size();i++)
        {int comp=strs[i].size();
          min1=min(min1,comp);
        }
        for(int f=0;f<min1;f++)
        {
          for(int i=0;i<strs.size()-1;i++)
          {
            if(strs[i][f]==strs[i+1][f])
            {   
                f1=1;
                continue;
            }
            else
            {f1=0;
            break;
            }
           
          }
           if(f1==1)
            ans++;
            else
            break;
        }
        string anss="";
        for(int i=0;i<ans;i++)
        {
            anss.push_back(strs[0][i]);
        }
        return anss;
    }
};
