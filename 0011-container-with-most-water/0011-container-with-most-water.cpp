class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=height.size();
        int l=0,r=s-1;
        int area=0;
        for(int i=0;i<s;i++)
        {
            int ar=(std::min(height[l],height[r]))*(r-l);
            area=std::max(area,ar);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return area;
    }
};