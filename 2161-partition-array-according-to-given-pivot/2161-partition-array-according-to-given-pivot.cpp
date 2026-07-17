class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int s=nums.size();
        vector<int> ans(s);
        int t=0;
        for(int i=0;i<s;i++)
        {
            if(nums[i]<pivot)
            {
                ans[t++]=nums[i];
            }
        }
        for(int i=0;i<s;i++)
        {
            if(nums[i]==pivot)
            {
                ans[t++]=nums[i];
            }
        }
        for(int i=0;i<s;i++)
        {
            if(nums[i]>pivot)
            {
                ans[t++]=nums[i];
            }
        }
        
        return ans;
    }
};