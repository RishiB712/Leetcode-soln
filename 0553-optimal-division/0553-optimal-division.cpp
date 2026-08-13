class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        if(nums.size()==1)
        return to_string(nums[0]);
        string s=""+to_string(nums[0])+"/";
        if(nums.size()!=2)
        s+="(";
        for(int i=1;i<nums.size();i++)
        {
            if(i!=nums.size()-1)
            s+=to_string(nums[i])+"/";
            else
            s+=to_string(nums[i]);
        }
        if(nums.size()!=2)
        s+=")";
        return s;
    }
};