class Solution {
public:
    int pndc(vector<int>& cnt)
    {
            int s=0;
            for(int i=0;i<26;i++)
            {
                if(cnt[i] > 0)
                {
                    s++;
                    cnt[i]--;
                    s+=pndc(cnt);
                    cnt[i]++;
                }
            }
            return s;
    }
    int numTilePossibilities(string tiles) {
        vector<int> cnt(26,0);
        for(int i=0;i<tiles.size();i++)
        cnt[tiles[i]-'A']++;
        return pndc(cnt);
    }
    
};