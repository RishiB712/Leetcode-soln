class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int s=0,c=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(c>=plants[i])
            {
                c-=plants[i];
                s++;
            }
            else
            {
                c=capacity;
                s=s+2*i;
                c-=plants[i];
                s++;
            }
        }
        return s;
    }
};