class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m; vector<int>a;
       int first; int second;
        for(int i=0;i<nums.size();i++){
            first=nums[i];
            second=target-first;
            if(m.find(second)!=m.end()){
                   
               return {i,m[second]};  } 
               m[first]=i;


        }
        return {-1,-1};
    }
};