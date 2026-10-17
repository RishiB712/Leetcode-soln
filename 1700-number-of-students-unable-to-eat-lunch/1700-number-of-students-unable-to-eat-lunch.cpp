class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       vector<int> cnt(2,0);
       int n=students.size();
       int j;
        for(int i=0;i<n;i++)
        cnt[students[i]]++;
        for (j=0;j<n && cnt[sandwiches[j]]>0;j++)
        cnt[sandwiches[j]]--;
        return n-j; 
    }
};