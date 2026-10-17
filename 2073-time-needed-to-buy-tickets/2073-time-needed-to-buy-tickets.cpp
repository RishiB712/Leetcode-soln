class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        int n=tickets.size();
        while(tickets[k]!=0)
        {
            for(int i=0;i<n;i++)
            {
                if(tickets[i]==0)
                continue;
                if(tickets[k]==0)
                break;
                tickets[i] -= 1; 
                ans++; 
            }
        }
        return ans;
    }
};