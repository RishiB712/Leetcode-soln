class Solution {
public:
    int countPrimes(int n) {
        vector<bool> chck(n+1,true);
        chck[1]=false;
        int c=0;
        if(n>2)
        c=1;
        if(n>3)
        c++;
        for(int i=2;i*i<=n;i++)
        {
            if(chck[i]==true)
            {
                for(int j=i*i;j<=n;j+=i)
                chck[j]=false;
            }
        }
        for(int i=2;i<n-1;i++)
        {
            if(chck[i])
            c++;
        }
        return c;
    }
};