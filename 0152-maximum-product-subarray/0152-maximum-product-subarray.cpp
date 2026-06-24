class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxending=nums[0];
        int minending=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
            swap(maxending,minending);

            maxending=max(nums[i],maxending*nums[i]);
            minending=min(nums[i],minending*nums[i]);


            ans=max(maxending,ans);
        }
return ans;
    }
};