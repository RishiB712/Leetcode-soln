class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            xr^=nums[i];
            if(nums[i]==0)
            c++;
        }
        if(c==nums.size())
        return 0;
        if(xr==0 && c!=nums.size())
        return nums.size()-1;
        if(xr!=0 && c!=nums.size())
        return nums.size();
        return 0;
    }
};
