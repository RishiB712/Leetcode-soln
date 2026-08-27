class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> ind;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            ind.push(i);
            else if(s[i]==')')
            {
                int st=ind.top();
                ind.pop();
                reverse(s.begin()+st+1,s.begin()+i);
            }
        }
        string ans="";
        for (char c:s)
        {
            if (c!='(' && c!=')')
            ans += c;
        }      
        return ans;
    }
};