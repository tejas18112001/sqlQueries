class Solution {
public:
    
    
bool solution(string s1 , int i , string s2 , int j , string s3 , int k , vector<vector<int>>&dp) {
        
        if(dp[i][j] != -1)
             return dp[i][j] ;
        
        if(i == s1.size() && j == s2.size() && k == s3.size()) {
            
            return true ;
        }
         
         bool x = false , y = false ;
      
         if(i != s1.size())
         if( s1[i] == s3[k] ){
             
             x = x || solution(s1 , i+1 , s2 , j , s3 , k+1 , dp) ;
             
         }
         
         if(j != s2.size())
           if(j<s2.size() && s2[j] == s3[k] ){
              y  = y  || solution(s1 , i , s2 , j+1 , s3 , k+1 , dp) ;
             
         }
          
       
        dp[i][j] = x || y ;
        return dp[i][j] ;
           
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size() , m = s2.size() , s = s3.size() ;
        if(n+m != s)
            return false ;
        map<char, int>mp1 , mp2 ;
      
        for( auto i : s1 ){
            mp1[i]++ ;
            
        }
        
        for(auto j : s2)
            mp1[j]++ ;
        
        for(auto k : s3){
            mp2[k]++ ;
        }
        
        if(mp1 != mp2)
            return false ;
     
        vector<vector<int>>dp(n+1 , vector<int>(m+1 , -1)) ;
      
        return solution(s1 , 0 , s2 , 0 , s3 , 0 , dp) ;
        
            
    }
};