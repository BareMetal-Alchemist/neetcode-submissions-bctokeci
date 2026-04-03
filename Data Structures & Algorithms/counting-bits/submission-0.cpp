class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for (int i = 0; i <= n; i++) {
            int count = 0;
            int curr = i;
            while(curr) {
                count += curr%2;
                curr /= 2;
            }
            ans[i] = count;
        }

        return ans;
    }
};
