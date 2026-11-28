class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int c=0;
        for(int x:nums)
        {
            if(x>=k)
            c++;
        }
        return nums.size()-c;
    }
};