class Solution {
public:
    int minDeletions(string s) {
        
        vector<int>freq(26) ;
        set<int>check ;
        int ans = 0 ; 
        for(auto i  :s){
            
            freq[i -'a']++; 
            
        }
        
      
        
        for(auto i : freq) {
            
           
            if(i == 0) continue ;
            else if(check.count(i) == 0) {
                // cout<<i<<" " ;
                check.insert(i) ;
            }
            
            else {
                int num = i ;
                while(num && check.count(num) != 0) {
                    // ans++ ;
                    num-- ;
                }
                
                ans += (i - num) ;
                if(num) {
                    check.insert(num) ;
                }
            }
        }
        
        return ans  ;
    }
};