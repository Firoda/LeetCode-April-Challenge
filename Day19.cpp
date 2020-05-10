class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)    return -1;
        int idx = findPivot(nums);
        cout << idx << " ";
        if(idx == 0)
            return bSearch(nums, target, 0, nums.size() - 1);
        if(idx>0 and nums[0]<= target and nums[idx-1]>= target){
            return bSearch(nums, target, 0, idx-1);
        }
        else{
            return bSearch(nums, target, idx, nums.size() - 1);
        }
    }
    
    int findPivot(vector<int>& nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        
        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[end])
                start = mid+1;
            else
                end = mid;
        }
        
        return start;
    }
    
    int bSearch(vector<int>&nums, int target, int start, int end)
    {
        if(start > end)
            return -1;
        while(start <= end)
        {
            int mid = start +(end - start)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                start = mid+1;
            else
                end = mid - 1;
        }
        return -1;
        
    }
    
    
};
