class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> v;
        unordered_map<char, char> closingMap = {{')', '('}, {']', '['}, {'}', '{'}};

        for(int i = 0; i < n; i++) {
            char ch = s[i];
            if (closingMap.find(ch) != closingMap.end()) { // s[i] is within mapping (is a closing a bracket)
                if (v.empty() || v.top() != closingMap[ch]) {
                    return false; // no corresponding opening bracket found
                }
                v.pop(); // matched opening bracket found
            } else { // opening bracket
                v.push(ch);
            }
        }

        return v.empty(); // check if any unclosed brackets remain
    }
};