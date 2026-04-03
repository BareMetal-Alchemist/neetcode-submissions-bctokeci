class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> mySt;
        int mx = INT_MIN;

        for (int n : nums) {
            mySt.insert(n);
            mx = max(mx, n);
        }

        for (int i = 0; i <= mx; i++) {
            if(!mySt.contains(i)) return i;
        }

        return mx+1;
    }
};
