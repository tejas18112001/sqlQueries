class Solution {
public:
    string reverseWords(string s) {
        stack<char>st ;
        string ans = "" ;
        int flag = 0 ; 
        for(int i = 0 ; i<s.size() ; i++) {
            if(s[i] == ' ') {
                string str = "" ;
                while(!st.empty()) {
                    char ch = st.top() ;
                    st.pop() ;
                    str += ch ;
                }
                if(flag == 0){
                    ans += str ;
                    flag = 1 ;
                    
                }
                    
                 
                else {
                   ans += ' ' ;
                   ans += str ;
                }
                
                
            }
            else {
                st.push(s[i]) ;
            }
            
            
            
            
        }
        
        if(flag != 0)
           ans += " " ;
        while(!st.empty()) {
            ans += st.top() ;
            st.pop() ;
        }
        
        return ans ;
    }
};