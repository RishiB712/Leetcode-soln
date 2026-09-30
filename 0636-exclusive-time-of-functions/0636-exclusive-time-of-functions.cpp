class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        stack<int> st;
        int prev_time = 0;

        for (const string& log : logs) {
            stringstream ss(log);
            string id_str, type, time_str;
            getline(ss, id_str, ':');
            getline(ss, type, ':');
            getline(ss, time_str, ':');
            int fn_id = stoi(id_str);
            int timestamp = stoi(time_str);
            if (type == "start") {
                if (!st.empty()) {
                    result[st.top()] += timestamp - prev_time;
                }
                st.push(fn_id);
                prev_time = timestamp;
            } else {
                result[st.top()] += timestamp - prev_time + 1;
                st.pop();
                prev_time = timestamp + 1;
            }
        }
        return result;
    }
};