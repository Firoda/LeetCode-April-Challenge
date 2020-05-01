class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;
        us.insert(n);
        while(n!= 1){
            n = getSquareValue(n);
            if(us.find(n) != us.end())
                return false;
            else
                us.insert(n);
        }
        return true;
    }
    
    int getSquareValue(int n)
    {
        int sum = 0;
        while(n>0)
        {
            int k = n%10;
            n = n/10;
            sum+=(k*k);
        }
        return sum;
    }
};
