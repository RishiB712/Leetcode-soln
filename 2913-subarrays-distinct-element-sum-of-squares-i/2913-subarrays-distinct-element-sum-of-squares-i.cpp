class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            vector<bool> cam(101);
            int nw=0;
            for(int j=i;j<n;j++)
            {
                if(!cam[nums[j]])
                {
                    cam[nums[j]]=true;
                    nw++;
                }
                ans+=nw*nw;
            }
        }
        return ans;
    }
};