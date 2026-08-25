class Solution {
public:
    int minAddToMakeValid(string s) {
        int op=0,clo=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            op++;
            else if(s[i]==')' && op>0)
            op--;
            else
            clo++;
        }
        return op+clo;
    }
};