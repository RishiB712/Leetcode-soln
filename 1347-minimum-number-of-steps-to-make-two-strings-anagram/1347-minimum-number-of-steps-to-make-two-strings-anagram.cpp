class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> c1(26,0),c2(26,0);
        for(int i=0;i<s.size();i++)
        {
            c1[s[i]-'a']++;
            c2[t[i]-'a']++;
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(c1[i]>c2[i])
            c+=c1[i]-c2[i];
        }
        return c;
    }
};