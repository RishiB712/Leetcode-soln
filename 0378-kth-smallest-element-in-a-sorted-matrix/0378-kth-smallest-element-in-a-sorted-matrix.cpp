class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> nw;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                int tmp=matrix[i][j];
                nw.push_back(tmp);
            }
        }
        sort(nw.begin(),nw.end());
        return nw[k-1];
    }
};