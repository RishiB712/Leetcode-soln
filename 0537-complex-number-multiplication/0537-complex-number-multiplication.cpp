class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a1,a2,b1,b2,l=0;
        for(int i=0;i<num1.size();i++)
        {
            if(num1[i]=='+')
            {
                a1=stoi(num1.substr(l,i-l));
                l=i+1;
            }
            if(num1[i]=='i')
            b1=stoi(num1.substr(l,i-l));
        }
        l=0;
        for(int i=0;i<num2.size();i++)
        {
            if(num2[i]=='+')
            {
                a2=stoi(num2.substr(l,i-l));
                l=i+1;
            }
            if(num2[i]=='i')
            b2=stoi(num2.substr(l,i-l));
        }
        return to_string(a1*a2-b1*b2)+"+"+to_string(a1*b2+a2*b1)+"i";
    }
};