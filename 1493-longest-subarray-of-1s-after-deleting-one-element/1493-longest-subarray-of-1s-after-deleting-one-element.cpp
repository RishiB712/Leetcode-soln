class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        int l=0,mx=0,c=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                c++;
            }
            while(c>1)
            {
                if(nums[l]==0)
                c--;
                l++;
            }
            mx=max(mx,i-l);
        }
        return mx;
    }
};