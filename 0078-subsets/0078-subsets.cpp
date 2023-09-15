class Solution {
public:
    
   // vector<vector<int>>ans ;
    
    void  SUBSETS(vector<int>& nums ,vector<vector<int>>&ans , vector<int > &subsets , int index ){
        
      
        
         if(index ==  nums.size() ){
             ans.push_back(subsets) ;
             return ;
         }
        
        
         
        
        
        subsets.push_back(nums[index]) ;
        SUBSETS(nums  ,ans,subsets ,index +1) ;
        subsets.pop_back() ;
        SUBSETS(nums  ,ans ,subsets ,index +1) ;
       
        
       
       
        
       
        
     }

    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int , int>> ans ;
        vector<vector<int>>ans ;
        vector<int>subsets ;
        SUBSETS(nums ,ans , subsets ,0) ;
        return ans ;
    }
};