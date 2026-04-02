class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        unordered_map<int, stack<int>> reMap;
        priority_queue<int> mxHp;
        vector<int> ans;

        for(int n : nums) {
            freq[n]++;
        }

        for (const auto& pair : freq) {
            reMap[pair.second].push(pair.first);
        }

        for(const auto& pair : freq) {
            mxHp.push(pair.second);
        }

        while (k) {
            ans.push_back(reMap[mxHp.top()].top());
            reMap[mxHp.top()].pop();
            mxHp.pop();
            k--;
        }

        return ans;

    }
};
