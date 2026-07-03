class Solution {
public:
    bool fn(vector<int>&c){
        for( auto it: c){
            if( it > 0) return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int>checker(26,0);
        for( auto it: chars) checker[it -'a']++;
        int ans =0;
        for( auto it: words){
            string str = it;
            vector<int>checker2(26,0);
            for(auto it: str) checker2[it - 'a']++;
            for( int i =0; i<26;i++){
                checker2[i] -= checker[i];
            }
            if(fn(checker2)) ans+=str.size();

        }
        return ans;
    }
};