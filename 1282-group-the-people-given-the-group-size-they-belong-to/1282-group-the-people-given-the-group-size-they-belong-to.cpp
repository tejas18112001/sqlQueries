class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        unordered_map<int , vector<int>>mp ;
        int n = nums.size() ;
        vector<vector<int>>ans ;
        for(int i = 0 ; i<n ; i++) {
            mp[nums[i]].push_back(i);
            
        }
        
        for(auto i:mp) {
            int size = i.second.size() ;
            int j = 0 ;
            while(j<size) {
                int num = i.first ;
                vector<int>temp ;
                while(num--) {
                    temp.push_back(i.second[j]) ;
                    j++ ;
                }
                ans.push_back(temp) ;
                
                j-- ;
                j++ ;
            }
        }
        
        return ans ;
    }
};