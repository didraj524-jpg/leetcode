class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4) {

        unordered_map<int, int> m;
        int count = 0;

        for (int a : nums1) {
            for (int b : nums2) {
                m[a + b]++;
            }
        }

        for (int c : nums3) {
            for (int d : nums4) {
                long long sum = -(c + d);
                if (m.find(sum) != m.end()) {
                    count += m[sum];
                }
            }
        }
        return count;
    }
};