class Solution {
public:
    int bestClosingTime(string customers) {
    int ans=0,prf=0,mxp=0;
    for(int i=0;i<customers.length();i++)
    {
        if(customers[i]=='Y')
        prf+=1;
        else
        prf+=-1;
        if(prf>mxp)
        {
            mxp=prf;
            ans=i+1;
        }
    }
    return ans;
    }
};