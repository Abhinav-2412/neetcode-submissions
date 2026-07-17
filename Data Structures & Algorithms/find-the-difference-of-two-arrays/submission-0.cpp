class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        set<int>s1;
        set<int>s2;
        vector<int>ans1;
        vector<int>ans2;
        for(auto it: nums1) s1.insert(it);
        for(auto it: nums2) s2.insert(it);
        for(auto it: s1){
            if( !s2.count(it)) ans1.emplace_back(it);
        }
        for(auto it: s2){
            if( !s1.count(it)) ans2.emplace_back(it);
        }
        ans.emplace_back(ans1);
        ans.emplace_back(ans2);
        return ans;

    }
};