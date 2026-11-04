class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0,mx=0,end=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            mx=max(mx,nums[i]+i);
            if(i==end)
            {
                ans+=1;
                end=mx;
            }
        }
        return ans;
    }
};