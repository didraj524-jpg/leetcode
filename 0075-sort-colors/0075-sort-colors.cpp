class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>arr3;


        for(int i=0;i<nums.size();i++){
             if(nums[i]==0){
                arr1.push_back(0);
             }
             if(nums[i]==1){
                arr2.push_back(1);
             }
             if(nums[i]==2){
                arr3.push_back(2);
             }
        }
        nums.clear();
      for(int i=0;i<arr1.size();i++){
        nums.push_back(0);
      }
         for(int i=0;i<arr2.size();i++){
        nums.push_back(1);
      }
         for(int i=0;i<arr3.size();i++){
        nums.push_back(2);
      }
       
       for(int i=0;i<nums.size();i++){
        cout<<nums[i];
       }
        
    }
};