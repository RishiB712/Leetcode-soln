class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n;
        int a=prdt(ans);
        while(a%t!=0)
        {
            ans++;
            a=prdt(ans);
        }
        return ans;
    }
    int prdt(int n)
    {
        int p=1;
        while(n!=0)
        {
            p*=n%10;
            n/=10;
        }
        return p;
    }
};