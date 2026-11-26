class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)
        return false;
        int a=10,k=true;
        while(n>=a)
        {
            n-=a;
            if(a%2==1)
            k=false;
            else
            k=true;
            a--;
        }
        return k;
    }
};