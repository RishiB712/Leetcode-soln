class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        vector<int> prv=intervals[0];
        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]<=prv[1])
                prv[1]=max(prv[1],intervals[i][1]);
            else
            {
                ans.push_back(prv);
                prv=intervals[i];
            }
        }
        ans.push_back(prv);
        return ans;
    }
};