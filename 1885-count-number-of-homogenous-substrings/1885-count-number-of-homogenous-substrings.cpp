class Solution {
public:
    int countHomogenous(string s) {
       long long int sum = 1; 
        long long  int cnt = 1 ;
        long long m = 1e9 + 7 ;

        
        for(int i = 1 ; i<s.size() ; i++) {
            

           if(s[i] == s[i-1])
           cnt = cnt + 1;
           else
           cnt = 1 ;

            sum =(sum + cnt)%m ;
          
        }
        return sum ;
    }
};