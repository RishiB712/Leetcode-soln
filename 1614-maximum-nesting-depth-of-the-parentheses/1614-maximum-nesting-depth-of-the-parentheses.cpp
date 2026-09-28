class Solution {
public:
    int maxDepth(string s) {
        int c=0,n=s.size(),mx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            c++;
            mx=max(c,mx);
            if(s[i]==')')
            c--;
        }
        return mx;
    }
};