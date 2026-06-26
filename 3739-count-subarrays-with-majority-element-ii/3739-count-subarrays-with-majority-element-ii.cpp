
class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long ans = 0;
        
        unordered_map<int, int> freq;
        
        int curr_balance = 0;
        freq[0] = 1; 
        
        long long smaller_count = 0; 

        for (int i = 0; i < n; i++) {
            int old_balance = curr_balance;
            
            curr_balance += (nums[i] == target) ? 1 : -1;

            if (curr_balance > old_balance) {
                smaller_count += freq[old_balance];
            } else {
                smaller_count -= freq[curr_balance];
            }

            ans += smaller_count;
            
            freq[curr_balance]++;
        } 
        
        return ans;
    }
};
