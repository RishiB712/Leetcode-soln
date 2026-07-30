class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xr=0,n=derived.size();
        for(int i=0;i<n;i++)
        xr^=derived[i];
        if(xr==0)
        return true;
        else
        return false;
    }
};