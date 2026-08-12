class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()==2 and nums[0]==nums[1])
        ans.push_back(nums[0]);
        else if(nums.size()<3)
        return nums;
        else{
        sort(nums.begin(),nums.end());
        int n=nums.size(),c=1,k=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                c++;
                if(c>n/3 && k==0)
                {
                    k=1;
                    ans.push_back(nums[i]);
                }
            }
            else
            {
                c=1;
                k=0;
            }
        }
        }
        return ans;
    }
};