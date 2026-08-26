class Solution {
public:
    string removeStars(string s) {
        int c=0;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='*')
            c--;
            else
            {
                s[c]=s[i];
                c++;
            }
        }
        return s.substr(0,c);
    }
};