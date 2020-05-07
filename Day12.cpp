class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 0) return 0;
        priority_queue<int> pq(stones.begin(), stones.end());
        
        while(!pq.empty())
        {
            if(pq.size() == 1)
                return pq.top();
            int k1 = pq.top(); pq.pop();
            int k2 = pq.top(); pq.pop();
            if(k1!=k2)
            {
                pq.push(abs(k1 - k2));
            }
        }
        return 0;
    }
};
