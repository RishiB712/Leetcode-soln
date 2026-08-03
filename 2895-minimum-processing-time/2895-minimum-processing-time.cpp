class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(tasks.begin(),tasks.end());
        sort(processorTime.begin(),processorTime.end());
        int mx=0;
        for(int i=0;i<processorTime.size();i++)
        {
            mx=max(mx,tasks[4*i+3]+processorTime[processorTime.size()-i-1]);
        }
        return mx;
    }
};