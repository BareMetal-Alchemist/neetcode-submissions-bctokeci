class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string s : strs) {
            int n = s.length();
            ans += to_string(n);
            ans += "#";
            ans += s;
        }
        cout << ans << endl;
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        bool hash = false;
        string curr = "";
        int x = 0;
        for(char c : s) {

            if (c == '#' && !hash) {
                x = stoi(curr);
                if (x == 0) {
                    ans.push_back("");
                    curr = "";
                } 
                else {
                    hash = true;
                    curr = "";
                }
                

            }

            else if (hash) {
               
                curr += c;
                x--;
                
                if (x == 0){
                    ans.push_back(curr);
                    curr = "";
                    hash = false;
                }
            }

            else {
                curr += c;
            }
            
        }
        return ans;

    }
};
