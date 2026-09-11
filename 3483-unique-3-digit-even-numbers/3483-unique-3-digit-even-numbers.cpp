class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> cnt(10,0);
        int n=digits.size(),ans=0;
        for(int i=0;i<n;i++)
        cnt[digits[i]]++;
        for(int i=100;i<1000;i+=2)
        {
            int a=i/100,b=(i/10)%10,c=i%10;
            vector<int> ned(10,0);
            ned[a]++;
            ned[b]++;
            ned[c]++;
            int k=0;
            for(int j=0;j<10;j++)
            {
                if(cnt[j]<ned[j])
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            ans++;
        }
        return ans;
    }
};