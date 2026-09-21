class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> inp;
        int ans=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            inp.pop();
            else if(operations[i]=="D")
            inp.push(2*inp.top());
            else if(operations[i]=="+")
            {
                int x=inp.top();
                inp.pop();
                int y=inp.top();
                inp.push(x);
                inp.push(x+y);
            }
            else
            inp.push(stoi(operations[i]));
        }
        while(!inp.empty())
        {
            ans+=inp.top();
            inp.pop();
        }
        return ans;
    }
};