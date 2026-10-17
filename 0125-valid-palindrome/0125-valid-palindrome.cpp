class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(),s.end(),' '),s.end());
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