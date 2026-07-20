class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int c=1;
        for(int i=0;i<target.size();i++)
        {
            while(c<target[i])
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                c++;
            }
            ans.push_back("Push");
            c++;
        }
        return ans;
    }
};