class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>st;
        vector<int>ans;
        int n = nums.size();
        for( int i =0; i<n; i++){
            if(st.size() == k){
                ans.emplace_back(*st.rbegin());
                st.erase(st.find(nums[i-k]));
            }
            st.insert(nums[i]);
        }
        ans.emplace_back(*st.rbegin());
        return ans;
   
    }
};
