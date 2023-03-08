class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v2;
        int mxindx=nums.size()-1;
        int mnindx=0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int m=i+1;m<nums.size();m++)
            {
                if(nums[i]+nums[m]==target)
                {
                    v2.push_back(i);
                    v2.push_back(m);
                    break;
                }
            }
        }
        return v2;
    }
};
