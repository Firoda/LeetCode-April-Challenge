class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int hash_count = 0;
        string res1 = "";
        for(int i=S.length()-1; i>=0;i--)
        {
            if(S[i] == '#')
            {
                hash_count++;
            }
            else if(S[i] != '#' && hash_count > 0)
            {
                hash_count--;
            }
            else
            {
                res1+=S[i];
            }
            
        }
        
        string res2 = "";
        hash_count = 0;
        for(int i=T.length()-1; i>=0;i--)
        {
            if(T[i] == '#')
            {
                hash_count++;
            }
            else if(T[i] != '#' && hash_count > 0)
            {
                hash_count--;
            }
            else
            {
                res2+=T[i];
            }
            
        }
        
        return (res1 == res2);
    }
};
