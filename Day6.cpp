class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        if(strs.size() == 0)
           return {};
        
        unordered_map<string, vector<string>> umap;
        
        for(int i=0;i<strs.size(); i++)
        {
            string temp = strs[i];
            temp = sortString(temp);
            
            if(umap.find(temp) == umap.end())
            {
               // umap[temp] = new vector<string>();
                umap[temp].push_back(strs[i]);
            }
            else
            {
                umap[temp].push_back(strs[i]);
            }
        }
        
        vector<vector<string>> res;
        for(auto it=umap.begin(); it!= umap.end(); it++)
        {
            res.push_back(it->second);
        }
        
        return res;
    }
    
    string sortString(string s)
    {
        int count[26];
        memset(count, 0, sizeof(count));
        for(int i=0;i<s.length();i++)
            count[s[i] - 'a']++;
        string res = "";
        for(int i=0;i<26;i++)
        {
            
            while(count[i]>0)
            {
                res+= (char)(i + 'a');
                count[i]--;
            }
           
        }
        return res;
    }
};
