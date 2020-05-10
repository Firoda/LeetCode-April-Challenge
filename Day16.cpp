class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st;
        stack<int> star;
        for(int i=0;i<s.length(); i++)
        {
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else if(!star.empty())
                {
                    star.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == '*')
                star.push(i);
            //cout << st.size() << "\n";
        }
        
        while(!st.empty() and !star.empty())
        {
            int star_top = star.top();
            int st_top = st.top();
            if(star_top < st_top)
                return false;
            
            st.pop();
            star.pop();
        }
        
        if(!st.empty())
            return false;
        
        return true;
    }
};
