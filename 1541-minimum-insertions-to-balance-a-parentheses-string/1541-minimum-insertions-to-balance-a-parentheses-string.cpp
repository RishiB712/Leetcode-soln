class Solution {
public:
    int minInsertions(string s) {
        int ins=0;
        int op=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(op%2!=0)
                {
                    ins++;
                    op--;
                }
                op+=2;
            }
            else
            {
                if(i+1<s.size() && s[i+1]==')')
                i++;
                else
                ins++;
                if(op>0)
                op-=2;
                else
                ins++;
            }
        }
        return ins+op;
    }
};