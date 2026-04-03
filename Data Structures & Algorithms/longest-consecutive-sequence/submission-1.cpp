class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;
        
        if(nums.empty()){
            return 0;
        }

        int ans = INT_MIN;
        for(int n : nums) {
            st.insert(n);
        }
        int count = 0;
        bool isStart = 0;

        for(auto itr : st) {
            int prev = itr - 1;

            if(!st.contains(prev)) {
                count++;
                bool p = true;
                while(p) {
                    itr++;
                    if (st.contains(itr)){
                        count++;
                    }
                    else {
                        p = false;
                    }
                }
                ans = max(ans, count);
                count = 0;
            }


            

        }

        return ans;
    }
};
