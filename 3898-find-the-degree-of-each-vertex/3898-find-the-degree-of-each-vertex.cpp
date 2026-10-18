class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
            s+=matrix[i][j];
            ans[i]=s;
        }
        return ans;
    }
};