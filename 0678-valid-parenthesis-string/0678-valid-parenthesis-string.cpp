class Solution {
public:
    bool checkValidString(string s) {
        int op=0;
        int mx=0;
        for (char c:s)
        {
            if(c=='(')
            {
                op++;
                mx++;
            }
            else if(c==')')
            {
                op=max(0,op-1);
                mx--;
            }
            else
            {
                op=max(0,op-1);
                mx++;
            }
            if(mx<0)
            return false; 
        }
        if(op==0)
        return true;
        return false; 
    }
};
