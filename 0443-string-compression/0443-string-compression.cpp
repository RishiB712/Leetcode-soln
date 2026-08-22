class Solution {
public:
    int compress(vector<char>& chars) {
        string nw="";
        int i=0;
        while (i<chars.size())
        {
            int j=i;
            while(j<chars.size() && chars[j]==chars[i])
            j++;
            nw+=chars[i];
            int count=j-i;
            if(count>1)
            {
                nw+=to_string(count);
            }
            i=j;
        }
        for(int i=0;i<nw.size();i++)
        chars[i]=nw[i];
        return nw.size();
    }
};