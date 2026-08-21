class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1) 
        return '0';
        int mid=pow(2,n-1);
        if(k==mid) 
        return '1';
        if(k>mid)
        {
            char ans=findKthBit(n-1,2*mid-k);
            if(ans=='0')
            return '1';
            else
            return '0';
        }
        return findKthBit(n-1,k);
    }
};