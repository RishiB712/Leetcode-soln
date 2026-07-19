class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ar(pref.size());
        ar[0]=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            ar[i]=pref[i-1]^pref[i];
        }
        return ar;
    }
};