class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int start = 0, end = height.size() - 1;

        while (start < end) {
            int width = end - start;
            int h = min(height[start], height[end]);
            int curr_water = width * h;

            max_water = max(max_water, curr_water);

            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }

        return max_water;
    }
};
