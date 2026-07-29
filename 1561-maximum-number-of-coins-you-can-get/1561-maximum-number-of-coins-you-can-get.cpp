class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s=0,n=piles.size();
        for(int i=n-2;i>=n/3;i-=2)
        {
            s+=piles[i];
        }
        return s;
    }
};