class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int chck=0;
        for(int i=0;i<word.size();i++)
        {
            st.push(word[i]);
            char c=word[i];
            if(word[i]==ch)
            {
                chck=1;
                break;
            }
        }
        if(chck==0)
        return word;
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        int k=ans.size();
        for(int i=k;i<word.size();i++)
        ans+=word[i];
        return ans;
    }
};