class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rvrse(nums,0,n-k-1);
        rvrse(nums,n-k,n-1);
        rvrse(nums,0,n-1);
    }
    void rvrse(vector<int>& nums,int s,int e)
    {
        for(int i=0;i<(e-s+1)/2;i++)
        {
            int tmp=nums[s+i];
            nums[s+i]=nums[e-i];
            nums[e-i]=tmp;
        }
    }
};