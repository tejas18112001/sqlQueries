class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0 ; 
        long long cnt = 0 ;
        for(int i = 0 ; i<nums.size() ; i++) {
           
            if(nums[i] == 0) {
               
               if(i!= 0 && nums[i] == nums[i-1]) {
                    cnt += 1 ;
               }else
                  cnt = 1 ;
              ans += cnt ;
            }

            
            
        }
        return ans ;
    }
};