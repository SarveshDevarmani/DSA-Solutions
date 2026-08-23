class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0, right = height.size() - 1;

        while(left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w * h;

            ans = max(ans, area);
            height[left] < height[right] ? left++ : right--;
        }

        return ans;
    }
};