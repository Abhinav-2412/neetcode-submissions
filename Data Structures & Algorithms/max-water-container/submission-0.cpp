class Solution {
public:
    
    int maxArea(vector<int>& heights) {
        int ans =0;
        int n = heights.size();
        vector<pair<int,int>>helper;
        for(int i =0; i<heights.size(); i++) helper.emplace_back(heights[i],i);
        sort(helper.begin(),helper.end(),[](pair<int,int>a, pair<int,int>b){
            return a.first < b.first;
        });

       
        int left = n;
        int right = -1;

        for(int i = n - 1; i >= 0; i--) {

            int h = helper[i].first;
            int idx = helper[i].second;

            if(left != n)
                ans = max(ans, h * (idx - left));

            if(right != -1)
                ans = max(ans, h * (right - idx));

            left = min(left, idx);
            right = max(right, idx);
        }

        return ans;
    }
};
