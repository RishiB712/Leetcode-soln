#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> fr(26,0);
        for(int i=0;i<word.size();i++)
        fr[word[i]-'a']++;
        sort(fr.rbegin(),fr.rend());
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(fr[i]==0)
            break;
            int c=(i/8)+1;
            ans+=fr[i]*c;
        }
        return ans;
    }
};
