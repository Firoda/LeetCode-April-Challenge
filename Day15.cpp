class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> left(nums.size(), 1);
        //vector<int> right(nums.size(), 1);
        
        int left_prod = nums[0];
        for(int i=1;i<nums.size(); i++)
        {
            left[i] = left_prod;
            left_prod*= nums[i];
        }
        
        int right_prod = nums[nums.size() - 1];
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            left[i]*=right_prod;
            right_prod*=nums[i];
        }
        
        return left;
    }
};
