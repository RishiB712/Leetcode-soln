class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char c:s)
        {
            if(c>='a' && c<='z')
            st.push(c);
            else
            st.pop();
        }
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};