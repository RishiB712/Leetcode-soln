class Solution {
public:
    int passwordStrength(string password) {
        string nw="";
        sort(password.begin(),password.end());
        for (int i = 0; i < password.size(); i++)
        {
            if (i+1==password.size() || password[i]!=password[i+1])
            nw+=password[i];
        }
        int ans=0;
        for(int i=0;i<nw.size();i++)
        {
            if(nw[i]>='A' && nw[i]<='Z')
            ans+=2;
            else if(nw[i]>='a' && nw[i]<='z')
            ans++;
            else if (nw[i]>='0' && nw[i]<='9')
            ans+=3;
            else
            ans+=5;
        }
        return ans;
    }
};