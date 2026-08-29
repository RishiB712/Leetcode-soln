class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) 
        return false;
        vector<int> c1(26,0);
        vector<int> c2(26,0);
        for(int i=0;i<s1.length();i++)
        {
            c1[s1[i]-'a']++;
            c2[s2[i]-'a']++;
        }
        for(int i=0;i<s2.length()-s1.length();i++)
        {
            if(c1==c2)
            return true;
            c2[s2[i]-'a']--;
            c2[s2[i+s1.length()]-'a']++;
        }
        return c1==c2;
    }
};
