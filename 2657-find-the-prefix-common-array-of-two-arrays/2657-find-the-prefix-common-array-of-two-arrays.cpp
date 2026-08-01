class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),c=0;
        vector<int> ans(n);
        vector<int> frq(n,0);
        for(int i=0;i<n;i++)
        {
            frq[A[i]-1]++;
            if(frq[A[i]-1]==2)
            c++;
            frq[B[i]-1]++;
            if(frq[B[i]-1]==2)
            c++;
            ans[i]=c;
        }
        return ans;
    }
};