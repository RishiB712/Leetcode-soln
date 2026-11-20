class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=candies[0];
        for(int i:candies)
        mx=max(mx,i);
        vector<bool> ans(candies.size());
        int i=0;
        for(int x:candies)
        {
            if(x+extraCandies>=mx)
            ans[i]=true;
            else
            ans[i]=false;
            i++;
        }
        return ans;
    }
};