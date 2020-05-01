class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_prof = 0;
        int i = 0;
        int j = 0;
        while(i<prices.size() and j<prices.size())
        {
            while(i+1<prices.size() && prices[i] > prices[i+1])
                i++;
            
            int j = i+1;
            while(j+1<prices.size() && prices[j] < prices[j+1])
                j++;
            if(j<prices.size())
                max_prof += prices[j] - prices[i];
            
            i = j+1;
        }
        
        return max_prof;
    }
};
