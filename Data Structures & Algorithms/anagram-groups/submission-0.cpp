class Solution {
public:

    struct VectorHash {
        std::size_t operator()(const std::vector<int>& v) const {
            std::size_t seed = v.size();
            for (int i : v) {
                seed ^= std::hash<int>{}(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
            }
            return seed;
        }
    };


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<vector<int>, vector<string>, VectorHash> res;

        


        for (string s : strs) {
            vector<int> count(26, 0);
            
            for (char c : s) {

                count[((c - '0') - 49)] += 1;
                
            }
            res[count].push_back(s);
        }

        for (const auto& pair : res) {
            ans.push_back(pair.second);
        }


        return ans;
    }
};
