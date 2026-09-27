class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> ind;
        int n=s.size();
        for(int i=0;i<n;i++)
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
        for (int i=0;i<n;i++)
        {
            if(s[i]!='(' && s[i]!=')')
            ans+=s[i];
        }      
        return ans;
    }
};