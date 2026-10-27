class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m,string(n,'#'));
        for(int i=0;i<m;i++)
        {
            string s=ans[i];
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==n-1)
                s[j]='.';
            }
            ans[i]=s;
        }
        return ans;
    }
};