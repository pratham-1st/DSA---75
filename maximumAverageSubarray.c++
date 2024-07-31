class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double result = 0;
        double sum = 0;

        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        result = sum/k;

        for(int i=k; i<nums.size(); i++){
            sum += nums[i] - nums[i-k];
            result = max(result, sum/k);
        }

        return result;
    }
};