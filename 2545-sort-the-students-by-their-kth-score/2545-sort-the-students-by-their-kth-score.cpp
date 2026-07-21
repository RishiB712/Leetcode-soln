class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            int temp=score[i][0];
            score[i][0]=score[i][k];
            score[i][k]=temp;
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if (score[i][0]<score[j][0])
                {
                    vector<int> temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            int temp=score[i][0];
            score[i][0]=score[i][k];
            score[i][k]=temp;
        }
        return score;
    }
};
