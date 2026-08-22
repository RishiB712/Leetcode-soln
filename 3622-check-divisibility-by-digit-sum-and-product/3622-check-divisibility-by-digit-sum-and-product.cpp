class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0,p=1,num=n;
        while(n!=0)
        {
            s+=n%10;
            p*=n%10;
            n/=10;
        }
        return (num%(s+p)==0);
    }
};