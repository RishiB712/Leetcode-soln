class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xr=0;
        for(int i=0;i<nums.size();i++)
        xr^=nums[i];
        xr^=k;
        int c=0;
        while(xr>0)
        {
            if(xr%2!=0)
            c++;
            xr>>=1;
        }
        return c;
    }
};