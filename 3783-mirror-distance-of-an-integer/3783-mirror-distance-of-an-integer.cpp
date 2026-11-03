class Solution {
public:
    int reverse(int n)
    {
        int ans=0;
        while(n)
        {
            ans=ans*10+n%10;
            n/=10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return(abs(reverse(n)-n));
    }
};