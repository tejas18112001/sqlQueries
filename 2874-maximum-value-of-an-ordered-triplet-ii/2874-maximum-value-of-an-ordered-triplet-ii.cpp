class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size() ; 
        long long ans = 0 ;
        vector<int>m(n) ;
        m[n-1] = nums[n-1] ;
        
        for(int i  = n-2; i>=0 ; i--) {
            
            m[i] = max(m[i+1] , nums[i]) ;
            
        }
        
        int maxi = nums[0] ;
        
        for(int j = 1 ; j<n-1 ; j++) {
            maxi = max(maxi , nums[j-1]) ;
            long long val = (long long)(maxi - nums[j])*m[j+1] ;
            ans = max(ans , val) ;
        }
        
        if(ans < 0) return 0 ;
        return ans ;
    }
};