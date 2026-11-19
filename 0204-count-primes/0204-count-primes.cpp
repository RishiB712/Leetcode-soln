class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prim(n,true);
        for(int i=2;i*i<n;i++)
        {
            if(prim[i]==true)
            {
                for(int j=i*i;j<n;j+=i)
                prim[j]=false;
            }
        }
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(prim[i])
            c++;
        }
        return c;
    }
};