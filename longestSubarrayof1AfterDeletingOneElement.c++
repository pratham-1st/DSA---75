class Solution {
public:
    int longestSubarray(vector<int>& nums) {
int max_sum = 0, r = 0, l = 0, zero_count = 0;

        while (r < nums.size()) {
            if (nums[r] == 0) {
                zero_count++;
            }

            while (zero_count > 1) {
                if (nums[l] == 0) {
                    zero_count--;
                }
                l++;
            }

            // Update max_sum considering the window size without the zero removed
            max_sum = max(max_sum, r - l + 1);

            r++;
        }

        return max_sum - 1;  // We need to delete one element
    }
};