class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxA = 0;

        while(left < right){
            int width = right-left;
            int current_height = min(height[left], height[right]);
            int current_width = width * current_height;
            maxA = max(maxA, current_width);

            if(height[left] < height[right]){
                left++;
            }
            else right--;
        }

        return maxA;
    }
};