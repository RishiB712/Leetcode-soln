class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int ls=0,rs=0,lq=0,rq=0;
        for(int i=0;i<n/2;i++)
        {
            if (num[i]=='?') 
            lq++;
            else 
            ls+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++)
        {
            if(num[i]=='?')
            rq++;
            else
            rs+=num[i]-'0';
        }
        if((lq+rq)%2==1 || (ls-rs)!=9*(rq-lq)/2) 
        return true;
        return false;
    }
};