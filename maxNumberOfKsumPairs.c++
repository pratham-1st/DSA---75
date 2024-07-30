class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> numCount;
        int count = 0;

        for (int num : nums) {
            int complement = k - num;
            if (numCount[complement] > 0) {
                // If there is a complement number, pair num with it
                count++;
                numCount[complement]--; // Decrease the frequency of the complement
            } else {
                // Otherwise, store the frequency of num
                numCount[num]++;
            }
        }

        return count;
    }
};