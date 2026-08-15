class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int s=0,e=people.size()-1,sm=0,ans=0;
        while(s<=e)
        {
            sm=people[s]+people[e];
            if(sm<=limit)
            {
                ans++;
                s++;
                e--;
            }
            else
            {
                ans++;
                e--;
            }
        }
        return ans;
    }
};