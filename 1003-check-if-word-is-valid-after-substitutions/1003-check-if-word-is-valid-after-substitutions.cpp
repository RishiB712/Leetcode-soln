class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='c' &&  st.size()>=2)
            {
                char b=st.top();
                st.pop();
                char a=st.top();
                st.pop();
                if(a!='a' || b!='b')
                return false;
            }
            else if(s[i]=='a')
            st.push(s[i]);
            else if(s[i]=='b' && st.size()>0 && st.top()=='a')
            st.push(s[i]);
            else
            return false;
        }
        return st.empty();
    }
};