class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int xr=0;
        long long mxr=(1<<maximumBit)-1;
        for(int i=0;i<nums.size();i++)
        {
            xr^=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans.push_back(mxr^xr);
            xr^=nums[i];
        }
        return ans;
    }
};