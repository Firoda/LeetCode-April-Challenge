class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0)
            return;
        
        int j = 0;
        for(int i=0;i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                j = i+1;
                while(j<nums.size())
                {
                    if(nums[j] != 0)
                    {
                        swap(nums[i], nums[j]);
                        break;
                    }
                    else
                        j++;
                }
            }
            
        }
    }
};
