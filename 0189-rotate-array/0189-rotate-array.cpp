class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            k=k%n;
        }
          int m=n-k;
          if(n>1){
            // if(m>n){
            //     m=m%n;
            // }
          for(int i=0;i<m;i++){
            nums.push_back(nums[i]);
            
          }
          nums.erase(nums.begin(),nums.begin()+m);
          };
          

    }
};