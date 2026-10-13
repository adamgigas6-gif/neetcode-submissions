class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        unordered_map<char, char> match = { {'(', ')'}, {'{','}'}, {'[',']'}};
        for (char c : s){
            if(match.count(c)){
                st.push(c);
            }
            else if (!st.empty() && c == match[st.top()]){
                st.pop();
            }
            else return false;
        }
        if(st.empty()) return true;
        return false;
    }
};
