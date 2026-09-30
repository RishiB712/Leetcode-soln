class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        int ins=0;        
        for(char c:seq)
        {
            if(c=='(')
            {
                ins++;
                ans.push_back(ins%2);
            }
            else
            {
                ans.push_back(ins%2);
                ins--;
            }
        }
        return ans;
    }
};