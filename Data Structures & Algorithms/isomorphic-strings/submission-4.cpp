class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        map<char, char>helper;
        for( int i =0; i<n; i++){
            if(helper.count(s[i]) and helper[s[i]] != t[i]) return false;
            helper[s[i]] = t[i];
        }
        map<char, char>helper2;
        for( int i =0; i<n; i++){
            if(helper2.count(t[i]) and helper2[t[i]] != s[i]) return false;
            helper2[t[i]] = s[i];
        }
        return true;
    }
};