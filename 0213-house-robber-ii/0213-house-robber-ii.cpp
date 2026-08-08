class Solution {
public:
    int rob(vector<int>& nums) {
     int n=nums.size();
     if(n==0)
     return 0;
     if(n==1)
     return nums[0];
     int p1=0,p2=0;
     for(int i=1;i<n;i++)
     {
        int tmp=p1;
        p1=max(p2+nums[i],p1);
        p2=tmp;
     }
     int p3=0,p4=0;
     for(int i=0;i<n-1;i++)
     {
        int tmp=p3;
        p3=max(p4+nums[i],p3);
        p4=tmp;
     }
     return max(p3,p1);   
    }
};