class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sz=grid[0].size();
        vector<int> rmx,cmx;
        for(int i=0;i<sz;i++)
        {
            int mx=grid[i][0];
            for(int j=0;j<sz;j++)
            {
                if(grid[i][j]>mx)
                mx=grid[i][j];
            }
            rmx.push_back(mx);
        }
        for(int i=0;i<sz;i++)
        {
            int mx=grid[0][i];
            for(int j=0;j<sz;j++)
            {
                if(grid[j][i]>mx)
                mx=grid[j][i];
            }
            cmx.push_back(mx);
        }
        vector<vector<int>> ans(sz,vector<int> (sz));
        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<sz;j++)
            {
                int r=rmx[i];
                int c=cmx[j];
                if(r<c)
                ans[i][j]=r;
                else
                ans[i][j]=c;
            }
        }
        int s=0;
        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<sz;j++)
            {
                s+=ans[i][j]-grid[i][j];
            }
        }
        return s;
    }
};