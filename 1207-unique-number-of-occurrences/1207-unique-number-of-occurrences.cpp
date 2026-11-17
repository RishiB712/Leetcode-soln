class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> cnt(2002);
        for(int i=0;i<arr.size();i++)
        cnt[arr[i]+1000]++;
        sort(cnt.begin(),cnt.end());
        for(int i=2001;i>0;i--)
        {
            if(cnt[i]!=0 && cnt[i]==cnt[i-1])
            return false;
        }
        return true;
    }
};