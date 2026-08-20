class Solution {
public:
    int passwordStrength(string password) {
        vector<int> tmp(123,0);
        for(int i=0;i<password.size();i++)
        tmp[password[i]]=1;
        int c=0;
        for(int i=0;i<123;i++)
        {
            if(tmp[i]==1)
            {
                if(i>=48 && i<=57)
                c+=3;
                else if(i>=65 && i<=90)
                c+=2;
                else if(i>=97 && i<=122)
                c++;
                else
                c+=5;
            }
        }
        return c;
    }
};