class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string s:operations)
        ans=(s[1]=='+')?ans+1:ans-1;
        return ans;
    }
};