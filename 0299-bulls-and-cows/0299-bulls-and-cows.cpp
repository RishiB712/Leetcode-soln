class Solution {
public:
    string getHint(string secret, string guess) {
        int bl=0,cw=0;
        vector<int> sec(10,0),gue(10,0);
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            bl++;
            else
            {
                sec[secret[i]-'0']++;
                gue[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++)
        {
           cw+=min(sec[i],gue[i]);
        }
        return to_string(bl)+"A"+to_string(cw)+"B";
    }
};