class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                if(st.size()>1)
                ans+=s[i];
                st.pop();
            }
            else
            {
                if(!st.empty())
                ans+=s[i];
                st.push(s[i]);
            }
        }
        return ans;
    }
};