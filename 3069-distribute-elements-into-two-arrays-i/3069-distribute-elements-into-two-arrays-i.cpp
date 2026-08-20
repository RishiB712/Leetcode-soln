class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans1,ans2;
        ans1.push_back(nums[0]);
        ans2.push_back(nums[1]);
        int c1=0,c2=0;
        for(int i=2;i<nums.size();i++)
        {
            if(ans1[c1]>ans2[c2])
            {
                ans1.push_back(nums[i]);
                c1++;
            }
            else
            {
                ans2.push_back(nums[i]);
                c2++;
            }
        }
        for(int i=0;i<ans2.size();i++)
        ans1.push_back(ans2[i]);
        return ans1;
    }
};