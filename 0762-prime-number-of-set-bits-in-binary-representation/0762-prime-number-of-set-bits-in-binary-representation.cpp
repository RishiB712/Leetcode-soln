class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        while(n)
        {
            if(n%2==1)
            ans++;
            n>>=1;
        }
        return ans;
    }
    bool isPrime(int n) {
        if(n==1)
        return false;
        if(n==2 || n==3)
           return true;
           if(n%2==0 || n%3==0)
           return false;
           if(n%6==1 || n%6==5)
           {
               for(long i=5;i*i<=n;i+=6)
               {
                   if(n%i==0 || n%(i+2)==0)
                   return false;
               }
           }
           return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            if(isPrime(hammingWeight(i)))
            ans++;
        }
        return ans;
    }
};