class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest=0;   int lowest=INT_MAX; int ans=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int st=i+1; int end=n-1;
            while(st<end){
                int currentsum=nums[i]+nums[st]+nums[end];
                closest=target-currentsum;
                  if(lowest>abs(closest)){
                    lowest=abs(closest);
                 ans= nums[i]+nums[st]+nums[end];
                  }
                  else if(closest==0){
                    return currentsum;
                  }
               else if(closest>0){
                    st++;

                }
                else if(closest<0){
                    end--;
                }
             
            }
        }
        return ans;
        
    }
};