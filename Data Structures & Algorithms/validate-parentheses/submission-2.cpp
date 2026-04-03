class Solution {
public:
    bool isValid(string s) {
        stack<char> myStk;
        unordered_map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
        for(char c : s) {
            if(c == '[' || c == '{' || c == '('){
                myStk.push(c);
            }

            else if(mp.contains(c)) {
                if (myStk.empty() || myStk.top() != mp[c]) return false;
                myStk.pop();
            }
        }

        if(myStk.empty()) return true;
        return false;
    }
};
