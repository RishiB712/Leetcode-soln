class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(num*9<sum)
        return "";
        string ans(sum/9,'9');
        if((sum%9)>0)
        ans+=('0'+sum%9);
        int k=num-ans.size();
        for(int i=0;i<k;i++)
        ans+='0';
        return ans;
    }
};