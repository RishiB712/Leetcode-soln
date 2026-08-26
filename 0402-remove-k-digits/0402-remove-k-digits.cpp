class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if (n==k)
        return "0";
        string ans(n,' '); 
        int c=0;
        for (int i = 0; i < n; i++)
        {
            while (c>0 && ans[c-1]>num[i] && k>0)
            {
                c--;
                k--;
            }
            ans[c]=num[i];
            c++;
        }
        c-=k;
        int st=0;
        while (st<c && ans[st]=='0')
            st++;
        if (st==c)
        return "0";
        return ans.substr(st,c-st);
    }
};
