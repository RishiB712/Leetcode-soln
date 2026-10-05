class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sm=0;
        if(num==1)
        return false;
        for(int i=1;i*i<=num;i++)
        {
            if(num%i==0)
            sm+=i+num/i;
        }
        sm-=num;
        return sm==num;
    }
};