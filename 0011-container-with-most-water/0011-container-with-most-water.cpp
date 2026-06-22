class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        long ans = 0;
        long currentw = 0;
        while (lp < rp) {
            currentw = (rp - lp) * min(height[lp], height[rp]);
            if (height[lp] > height[rp]) {
                rp--;
            } else {
                lp++;
            }

            if (ans < currentw) {
                ans = currentw;
            }
        }
        return ans;
    }
};