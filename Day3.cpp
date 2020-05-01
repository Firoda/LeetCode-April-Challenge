class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        
        return maxSubArrayUtil(nums, 0, nums.size() - 1);
    }
    
    int maxSubArrayUtil(vector<int>& nums, int l, int h)
    {
        if(l == h)
            return nums[l];
        
        int mid = l + (h-l)/2;
        
        
        return max(maxSubArrayUtil(nums, l, mid), max(maxSubArrayUtil(nums, mid+1, h), maxAcrossSubArray(nums, l, mid, h)));
    }
    
    int maxAcrossSubArray(vector<int>& nums, int l, int mid, int h)
    {
        int left_sum = INT_MIN;
        int sum = 0;
        for(int i=mid;i>=l;i--)
        {
            sum = sum + nums[i];
            if(left_sum < sum)
                left_sum = sum;
        }
        
        int right_sum = INT_MIN;
        int sum2 = 0;
        for(int i=mid+1;i<=h;i++)
        {
            sum2 = sum2 + nums[i];
            if(right_sum < sum2)
                right_sum = sum2;
        }
        
        return left_sum + right_sum;
    }
    
};
