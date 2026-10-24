class Solution {
public:
    int totaldays(string s)
    {
        vector<int> day={31,28,31,30,31,30,31,31,30,31,30,31};
        int m=stoi(s.substr(0,2));
        int d=stoi(s.substr(3,2));
        int t=d;
        for(int i=0;i<m-1;i++)
        t+=day[i];
        return t;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int sa=totaldays(arriveAlice),ea=totaldays(leaveAlice);
        int sb=totaldays(arriveBob),eb=totaldays(leaveBob);
        int s=max(sa,sb),e=min(ea,eb);
        return max(0,e-s+1);
    }
};