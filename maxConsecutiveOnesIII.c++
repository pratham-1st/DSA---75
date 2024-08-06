class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_sum = 0, l=0, r=0, zero=0;

        while(r < nums.size()){

            if(nums[r] == 0){
                zero++;
            }

            if(zero > k){
                if(nums[l] == 0) zero--;
                l++;
            }

            if(zero <= k){
                max_sum = max(max_sum, r-l+1);
            }

            r++;
        } 

        return max_sum;
    }
};