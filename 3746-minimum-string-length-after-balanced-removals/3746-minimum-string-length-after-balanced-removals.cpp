class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int c1=0,c2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            c1++;
            else
            c2++;
        }
        return s.size()-2*min(c1,c2);
    }
};