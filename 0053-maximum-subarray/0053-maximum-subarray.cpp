class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int mx=-10001;
        for(int i=0;i<nums.size();i++)
        {
            if(cs<0)
            cs=0;
            cs+=nums[i];
            mx=max(mx,cs);
        }
        return mx;
    }
};