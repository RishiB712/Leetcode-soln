class Solution {
public:
    int maxDistinct(string s) {
        sort(s.begin(),s.end());
        int c=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            c++;
        }
        return c;
    }
};