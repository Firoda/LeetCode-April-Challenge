class Solution {
public:
    int countElements(vector<int>& arr) {
        int res = 0;
        unordered_set us(arr.begin(), arr.end());
        
        for(int i=0;i<arr.size(); i++)
        {
            if(us.find(arr[i]+1) != us.end())
                res++;
        }
        return res;
    }
};
