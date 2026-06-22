class Solution {
public:
    void rs(vector<vector<int>>& ans, vector<int>& curr, int i,
            vector<int>& nums) {
        if (i == nums.size()) {
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[i]);
        rs(ans, curr, i + 1, nums);
        curr.pop_back();
        rs(ans, curr, i + 1, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;

        rs(ans, curr, 0, nums);

        return ans;
    }
};