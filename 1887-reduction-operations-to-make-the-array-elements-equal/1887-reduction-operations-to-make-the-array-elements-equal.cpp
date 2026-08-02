class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n=nums.size(),ans=0,op=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]!=nums[i])
            {
                op++;
            }
            ans+=op;
        }
        return ans;
    }
};