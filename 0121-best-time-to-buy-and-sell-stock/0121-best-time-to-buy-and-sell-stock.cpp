class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,prft=0;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
                int dif=prices[r]-prices[l];
                prft=max(prft,dif);
            }
            else
            l=r;
            r++;
        }
        return prft;
    }
};