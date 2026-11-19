class Solution {
    string binryconv(string s)
    {
        int n=stoi(s);
        string ans="";
        while(n)
        {
            char c=(n%2)+'0';
            ans=c+ans;
            n/=2;
        }
        return ans;
    }
public:
    string convertDateToBinary(string date) {
        return binryconv(date.substr(0,4))+"-"+binryconv(date.substr(5,2))+"-"+binryconv(date.substr(8,2));
    }
};