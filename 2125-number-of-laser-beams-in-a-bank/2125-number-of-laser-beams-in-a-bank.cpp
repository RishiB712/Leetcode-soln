class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int ar[n];
        for(int i=0;i<n;i++)
        {
            string s=bank[i];
            int sz=s.size();
            int c=0;
            for(int j=0;j<sz;j++)
            {
                if(s[j]=='1')
                c++;
            }
            ar[i]=c;
        }
        int pc=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=0)
            {
                ans+=pc*ar[i];
                pc=ar[i];
            }
        }
        return ans;
    }
};