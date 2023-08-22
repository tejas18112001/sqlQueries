class Solution {
public:
    string convertToTitle(int k) {
         
         map<int  , char>mp ;
         int j = 1 ;
        for(char i = 'A' ; i <= 'Z' ; i++) {
            mp[j] = i ;
            j++ ;
        }
        
     
        
        string ans = "" ;
        
        while(k) {
            ans = mp[k%26? k%26 : 26] + ans ;
            if(k%26 == 0) 
                k = k/26 -1 ;
            else
                k =k/26 ;
        }
        
        return ans ;
        /*
               52%26 = 0
               52 /26 - > 2
               52 % 26 = 0
        */
        
    }
};