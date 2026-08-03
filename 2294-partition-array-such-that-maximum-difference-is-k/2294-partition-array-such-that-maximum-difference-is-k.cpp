class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mn=nums[0];
        int c=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]-mn>k)
            {
                c++;
                mn=nums[i];
            }
        }
        return c;
    }
};