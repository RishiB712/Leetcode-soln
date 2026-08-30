class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)
        return n;
        int mx=nums[0],mn=nums[0],k1=0,k2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>mx)
            {
                mx=nums[i];
                k1=i;
            }
            if(nums[i]<mn)
            {
                mn=nums[i];
                k2=i;
            }
        }
        int o1=max(k1,k2)+1;
        int o2=n-min(k1,k2);
        int o3=min(k1+1,n-k1)+min(k2+1,n-k2);
        return min({o1,o2,o3});
    }
};