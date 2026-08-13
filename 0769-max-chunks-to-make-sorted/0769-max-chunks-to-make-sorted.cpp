class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> srtedsum(arr.size());
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            srtedsum[i]=(i*i+i)/2;
            if(i!=0)
            arr[i]+=arr[i-1];
        }
        for(int i=0;i<arr.size();i++)
        {
            if(srtedsum[i]==arr[i])
            ans++;
        }
        return ans;
    }
};