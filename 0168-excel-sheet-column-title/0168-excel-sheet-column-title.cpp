class Solution {
public:
    string convertToTitle(int columnNumber) {
         
        map<int  , char>mp ;
        
        for(int i = 0, j = 1 ; i< 26 ; i++ , j++) {
            mp[j] = 'A'+  i ;
        }
        
        /*
        39 / 26 -> 1 
        39 % 26 = 13
        */
        string ans = "" ;
        int k=columnNumber;
        while(k){
           ans = mp[k%26? k%26:26] + ans;
           // cout<<k<<" ";
            if(k%26==0){
                k = k/26 -1;
            }
            else k/=26;
        }
        
        // cout<<ans<<endl;
        // ans += mp[1200%26] ;
        
    
        return ans;
        
    }
};