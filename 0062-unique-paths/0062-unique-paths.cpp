class Solution {
public:
    int uniquePaths(int m, int n) {
        int a=m+n-2,r=min(m-1,n-1);
        long ans=a;
        if(r==0)
        return 1;
        for(int i=1;i<min(r,a-r);i++)
        ans=(ans*(a-i))/i;
        return ans/r;
    }
};