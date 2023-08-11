class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size() ;
       
        if( n ==1 || nums[0] != nums[1]) return nums[0] ;
        if(nums[n-1] != nums[n-2]) return nums[n-1] ;
        
        int low  = 0 , high = n-1 ;
        
        while(low<= high) {
            int mid = (high - low)/2 + low ;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1] )
                return nums[mid] ;
            if(mid%2 == 1) { //index is odd
                if(nums[mid] == nums[mid-1])   //even , odd
                    low = mid+1 ;
                else 
                    high = mid ;
                
            }
            else {
                if(nums[mid] == nums[mid+1]){
                    low = mid+1 ;
                }else {
                    high = mid ;
                }
            }
            
            
            
            
        }
        
        return -1 ;
    }
};