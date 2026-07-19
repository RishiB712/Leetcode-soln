class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string s="";
        char d=digit+'0';
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=to_string(nums[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==d)
            c++;
        }
        return c;
    }
};