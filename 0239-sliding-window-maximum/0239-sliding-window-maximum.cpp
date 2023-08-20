class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans ;
        deque<int>q ;
       
       int i = 0 ; 
       int j = 0 ; 
       for(int i = 0 ; i<k ; i++) {
           
           while(!q.empty() && nums[q.back()] <= nums[i]) {
               q.pop_back() ;
           }
           
           q.push_back(i) ;
          
       }
        
        ans.push_back(nums[q.front()]) ;
        
    
     
      for(int i = k ; i<nums.size() ; i++) {
          if(i-k == q.front()) {
              q.pop_front() ;
          }
          
          while(!q.empty() && nums[i] >= nums[q.back()]) {
              q.pop_back() ;
          }
          
          q.push_back(i) ;
          
          ans.push_back(nums[q.front()]) ;
      }
        
        return ans ;
    }
};