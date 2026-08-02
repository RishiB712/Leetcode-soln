class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int a=0,b=0,c=0;
        int n=s.size()+spaces.size();
        string ans(n,' ');
        for(int i=0;i<s.size();i++)
        {
            if(c<spaces.size() && i==spaces[c])
            {
                ans[a]=' ';
                a++;
                c++;
            }
            ans[a]=s[i];
            a++;
        }
        return ans;
    }
};