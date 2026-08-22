class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                int a=stck.top();
                stck.pop();
                int b=stck.top();
                stck.pop();
                stck.push(a+b);
            }
            else if(tokens[i]=="-")
            {
                int a=stck.top();
                stck.pop();
                int b=stck.top();
                stck.pop();
                stck.push(b-a);
            }
            else if(tokens[i]=="*")
            {
                int a=stck.top();
                stck.pop();
                int b=stck.top();
                stck.pop();
                stck.push(a*b);
            }
            else if(tokens[i]=="/")
            {
                int a=stck.top();
                stck.pop();
                int b=stck.top();
                stck.pop();
                stck.push(b/a);
            }
            else
            stck.push(stoi(tokens[i]));
        }
        return stck.top();
    }
};