class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int i,j;
        int n=nums.size();
        
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        
        return v;
    }
};