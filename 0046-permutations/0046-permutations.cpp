class Solution {
public:
void getpermu(vector<vector<int>>&ans,vector<int>&nums,int idx){
       if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
    for(int i=idx;i<nums.size();i++){
       
        swap(nums[i],nums[idx]);
        getpermu(ans,nums,idx+1);
        swap(nums[i],nums[idx]);


    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getpermu(ans,nums,0);

        return ans;
    }
};