class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        m[0] = -1;
        vector<int> ps(nums.size());
        ps[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            ps[i] = nums[i] + ps[i - 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            int a = ps[i] % k;
            if (m.find(a) != m.end()) {
                if (i - m[a] >= 2) {
                    return true;
                }

            } else {
                m[a] = i;
            }
        }
        return false;
    }
};