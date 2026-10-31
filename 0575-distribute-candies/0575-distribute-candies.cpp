class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        sort(candyType.begin(),candyType.end());
        int dist=1;
        for(int i=1;i<n;i++)
        {
            if(candyType[i]!=candyType[i-1])
            dist++;
        }
        return min(dist,n/2);
    }
};