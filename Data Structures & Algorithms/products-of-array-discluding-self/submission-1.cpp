class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        vector<int> prefix_sums;
        vector<int> suffix_sums;
        vector<int> ans;
        prefix_sums.push_back(1);
        suffix_sums.push_back(1);

        for(int i = 0; i < nums.size(); i++) {
            int entry = prefix_sums[i] * nums[i];
           
            prefix_sums.push_back(entry);
        }
        int k = 1;
        
        for(int i = nums.size()-1; i >= 0; i--) {
            int entry = nums[i] * suffix_sums[k-1];
            
            suffix_sums.push_back(entry);
            k++;
        }
        
        for(int i = 0; i < nums.size(); i++) {
            int entry = prefix_sums[i] * suffix_sums[(nums.size()-1)-i];
            
            ans.push_back(entry);
        }


        return ans;


    }
};
