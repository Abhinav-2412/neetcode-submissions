class Solution {
public:
       string fn(string &s){
        int n = s.size();
        int e = -1;
        for( int i =0; i<n; i++){
            if( s[i] == '@'){
                e = i; 
                break;
            }
        }int r = -1;
        for( int i =0; i<=e; i++){
                if( s[i] == '+'){
                    r = i;
                    break;
                }
        }
        if( r != -1) s.erase(r,e - r);
        int end = (r == -1) ? e - 1 : r - 1;

        for (int i = end; i >= 0; i--) {
             if (s[i] == '.')
        s.erase(i, 1);
}
      
       
        return s;
       }
    int numUniqueEmails(vector<string>& emails) {
        set<string>st;
        for( auto &it: emails){
              st.insert(fn(it));
        }
        return st.size();
    }
};