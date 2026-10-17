class Solution {
public:
    bool isPalindrome(string s) {
        string nw="";
        for(char c:s)
        {
            if(isalnum(c))
            nw+=tolower(c);
        }
        string tm=nw;
        reverse(tm.begin(),tm.end());
        return tm==nw;
    }
};