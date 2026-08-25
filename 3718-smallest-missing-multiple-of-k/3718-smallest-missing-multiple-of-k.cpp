class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> chck(101);
        for(int i=0;i<nums.size();i++)
        chck[nums[i]]=1;
        for(int i=k;i<101;i+=k)
        {
            if(chck[i]!=1)
            return i;
        }
        return 100+(k-(100%k));
    }
};