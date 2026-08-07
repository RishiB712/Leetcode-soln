class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prft=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            prft+=prices[i]-prices[i-1];
        }
        return prft;
    }
};