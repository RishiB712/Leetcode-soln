class Solution {
public:
    vector<int> constructRectangle(int area) {
        int f1=1;
        for(int i=2;i<=sqrt(area);i++)
        {
            if(area%i==0)
            f1=i;
        }
        int l=max(f1,area/f1),w=min(f1,area/f1);
        return {l,w};
    }
};