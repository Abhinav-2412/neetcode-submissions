class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>helper;
        for(auto it: nums) helper[it]++;
        vector<pair<int,int>>v(helper.begin(),helper.end());
        sort( v.begin(),v.end(),[](auto&a , auto&b){
            return b.second < a.second;
        });
        vector<int>ans;
        for(int i =0; i<k;i++)
        {
            int x = v[i].first;
            ans.emplace_back(x);
        }
        return ans;
    }
};
