class Solution {
public:
int sumofdigit(int n)
{
    int ans=0;
    while(n)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
    int minElement(vector<int>& nums) {
        int ans=nums[0];
        for(int i:nums)
        ans=min(sumofdigit(i),ans);
        return ans;
    }
};