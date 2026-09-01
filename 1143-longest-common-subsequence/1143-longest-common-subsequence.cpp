class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int s1=text1.size(),s2=text2.size();
        vector<vector<int>> mx(s1+1,vector<int>(s2+1,0));
        for(int i=1;i<=s1;i++)
        {
            for(int j=1;j<=s2;j++)
            {
                if(text1[i-1]==text2[j-1])
                mx[i][j]=mx[i-1][j-1]+1;
                else
                mx[i][j]=max(mx[i-1][j],mx[i][j-1]);
            }
        }
        return mx[s1][s2];
    }
};