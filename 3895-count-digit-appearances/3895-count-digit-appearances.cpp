class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=cnt(nums[i],digit);
        }
        return ans;
    }
    private:
    int cnt(int n,int d)
    {
        int rs=0;
        while(n!=0)
        {
            int r=n%10;
            if(r==d)
            rs++;
            n/=10;
        }
        return rs;
    }
};