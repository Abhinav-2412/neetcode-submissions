class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>helper;
        int n = names.size();
        for(int i =0; i<n; i++){
            helper.emplace_back(names[i],heights[i]);
        }
        sort(helper.begin(),helper.end(),[](pair<string,int>a, pair<string,int>b){
            return a.second > b .second;
        });

        vector<string>ch;
        for(auto it:helper) ch.emplace_back(it.first);
        return ch;
    }
};