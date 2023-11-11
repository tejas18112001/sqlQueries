class Solution {
public:
    int partitionString(string s) {
        set<char>st ;
        st.insert(s[0]) ;
        int ans = 1 ;
        for(int i = 1 ; i< s.size() ; i++) {
             if(st.find(s[i]) != st.end()) {
                    ans++ ;
                    st.clear() ;
                   
             }

             st.insert(s[i]) ;
                
        }

        return ans ;
        
    }
};