class Solution {
public:
    int sumofd(int n)
    {
        int s=0;
        while(n)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int addDigits(int num) {
        while(num>=10)
        num=sumofd(num);
        return num;
    }
};