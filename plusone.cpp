class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>-1;i--)
        {
            if(digits[i]==9&&i==0){
            digits.push_back(0);
            digits[i]=1;
            }
            else if(digits[i]==9)
            {
              digits[i]=0;
            }
            else
            {
                digits[i]=digits[i]+1;
                break;
            }

        }
        return digits;
    }
};
