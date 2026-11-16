class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long s=0;
        for(int i:chalk)
        s+=i;
        k%=s;
        for(int i=0;i<chalk.size();i++)
        {
            if(k<chalk[i])
            return i;
            k-=chalk[i];
        }
        return 0;
    }
};