class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s:sentences)
        {
            int mx=0;
            for(char c:s)
            {
                if(c==' ')
                mx++;
            }
            // if(mx)
            // mx++;
            ans=max(mx,ans);
        }
        return ans+1;
    }
};