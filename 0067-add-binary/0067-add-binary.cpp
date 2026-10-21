#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1;
        int j=b.size()-1;
        int c=0;
        while(i>=0 || j>=0 || c)
        {
            int k=c;
            if(i>=0)
            {
                k+=a[i]-'0';
                i--;
            }
            if(j>=0)
            {
                k+=b[j]-'0';
                j--;
            }
            ans+=to_string(k%2);
            c=k/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};